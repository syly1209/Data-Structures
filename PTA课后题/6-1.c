#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;
#define MAXSIZE 10
typedef enum {false, true} bool;
typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* ??????????????? */
};

List ReadInput(); /* ????,??????????1???? */
Position BinarySearch( List L, ElementType X );
bool Insert( List L, ElementType X ){
	if(L->Last>=MAXSIZE)
	return false;
	int l=0;
	int r=L->Last;
	while(l<r){
		int mid=(l+r)>>1;
		if(X>=L->Data[mid])
		r=mid;
		else
		l=mid+1;
	}
	if(X==L->Data[r])
	return false;
	if(r==L->Last){
		L->Last++;
		L->Data[L->Last]=X;
		return true;
	}
	for(int i=L->Last;i>=r;i--)
	L->Data[i+1]=L->Data[i];
	L->Data[r]=X;
	L->Last++;
	return true;
} 
int main()
{
    List L;
    ElementType X;
    Position P;
    L=malloc(sizeof(struct LNode));
    //L = ReadInput();
    L->Data[0]=100;
    L->Data[1]=30;
    L->Data[2]=20;
    L->Data[3]=10;
    L->Last=3;
    scanf("%d", &X);
    if ( Insert( L, X ) == false )
        printf("Insertion failed.\n");
    for(int i=0;i<=4;i++)
    printf("%d\n",L->Data[i]);

    return 0;
}
//List ReadInput(){
//	
//}

