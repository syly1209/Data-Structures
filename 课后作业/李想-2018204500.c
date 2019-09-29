#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	char date;
	struct Node *next;
};
typedef struct Node List;
typedef struct Node* pList;
pList create(char date){
	pList p=(pList)malloc(sizeof(List));
	p->date=date;
	p->next=NULL;
	return p;
}
pList init(){
	pList phead=create('\n');
	return phead;
}
int Length(pList phead){
	int ans=0;
	while(phead!=NULL){
		ans++;
		phead=phead->next;
	}
	return ans;
}
pList FindX(pList phead,int x){
	int sum=0;
	pList i;
	for(i=phead;i!=NULL;i=i->next,sum++){
		if(sum==x)
		break;
	}
	return i;
}
int FindY(pList phead,char x){
	int sum=0;
	pList i;
	for(i=phead;i!=NULL;i=i->next){
		if(i->date==x)
		break;
		sum++;
	}
	return sum;
}
void Insert(pList phead,int x,char date){
	if(x>Length(phead)){
		printf("位置不合法\n");
		return ;
	}
	int sum=0;
	pList i;
	for(i=phead;i!=NULL;i=i->next,sum++){
		if(sum==x-1)
		break;
	}
	pList p1=i;
	pList p2=create(date);
	p2->next=p1->next;
	p1->next=p2;
}
void Delete(pList phead,int x){
	if(x>=Length(phead)){
		printf("位置不合法\n");
		return ;
	}
	int sum=0;
	pList i;
	for(i=phead;i!=NULL;i=i->next,sum++){
		if(sum==x-1)
		break;
	}
	pList p1=i->next;
	i->next=p1->next;
	free(p1);
}
void print(pList phead){
	printf("此时链表元素为："); 
	for(pList i=phead;i!=NULL;i=i->next){
		printf("%c",i->date);
	}
	printf("\n");
}
int main(){
	char a[100];
	pList head=init();
	printf("链表初始化完成\n软件工程创新实验班-高新宇-2018204495\n"); 
	while(1){
		gets(a);
		if(!strcmp(a,"链表插入")){
			int x;
			char y;
			scanf("%d %c",&x,&y);
			Insert(head,x,y);
			print(head);
		}
		else if(!strcmp(a,"按下标查寻")){
			int x;
			scanf("%d",&x);
			pList p=FindX(head,x);
			if(p==NULL)
			printf("下标越界\n");
			else
			printf("%c\n",p->date);
		} 
		else if(!strcmp(a,"按元素查寻")){
			char x[10];
			scanf("%s",x);
			int p=FindY(head,x[0]);
			if(p>=Length(head))
			printf("链表不够长\n");
			else
			printf("%d\n",p);
		}
		else if(!strcmp(a,"删除元素")){
			int x;
			scanf("%d",&x);
			Delete(head,x);
			print(head);
		} 
		else if(!strcmp(a,"修改链表元素")){
			int x;
			char y;
			scanf("%d %c",&x,&y);
			if(x>=Length(head)){
				printf("链表越界\n");
			}
			else{
				pList p=FindX(head,x);
				p->date=y;
			    print(head);
			}
		} 
	}
	return 0;
}
