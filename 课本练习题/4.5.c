#include<stdio.h>
int queue[100];
int cnt=1;
int t[2000];
int bs(int l,int r,int x){
	if(l>r)
	return 0;
	int mid=(l+r)/2;
	//printf("%d %d %d\n",l,r,mid);
	if(x>queue[mid])
	return bs(l,mid-1,x);
	else if(x<queue[mid])
	return bs(mid+1,r,x);
	else if(x==queue[mid])
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t[i]);
	}
	int a,b;
	scanf("%d%d",&a,&b);
	if(t[a]==0){
		printf("ERROR: T[%d] is NULL\n",a);
		return 0;
	}
	if(t[b]==0){
		printf("ERROR: T[%d] is NULL\n",b);
		return 0;
	}
	while(a>=1){
		if(t[a])
		queue[cnt++]=a;
		a/=2;
	}
	while(b>=1){
		if(t[b]&&bs(1,cnt-1,b)){
			printf("%d %d\n",b,t[b]);
			break;
		}
		b/=2;
	}
	return 0;
}
