#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct h h;
int n;
struct h{
	struct h *l;
	struct h *r;
	int data;
};
struct h *root;
int max(int x,int y){
	return x>y? x:y;
}
int ph(h *k){
	if(k==NULL)
	return 0;
	return max(ph(k->l),ph(k->r))+1;
}
h *L(h *p){
	h *x=p->l;
	p->l=x->r;
	x->r=p;
	return x;
}
h *R(h *p){
	h *x=p->r;
	p->r=x->l;
	x->l=p;
	return x;
}
h* in(h *k,int x){
	if(k==NULL){
		k=(h *)malloc(sizeof(h));
		k->l=k->r=NULL;
		k->data=x;
		return k;
	}
	if(x<k->data)
	k->l=in(k->l,x);
	else
	k->r=in(k->r,x);
	if(ph(k->l)-ph(k->r)==2){
		if(ph(k->l->l)-ph(k->l->r)==-1)
		k->l=R(k->l);
		k=L(k);
	}
	else if(ph(k->l)-ph(k->r)==-2){
		if(ph(k->r->r)-ph(k->r->l)==-1)
		k->r=L(k->r);
		k=R(k);
	}
	return k;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		root=in(root,x);	
	}
	printf("%d",root->data);
	return 0;
}

