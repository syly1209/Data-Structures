#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* ??????????????? */
};

List ReadInput(); /* ????,??????????1???? */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    //L = ReadInput();
    L->Data[1]=1;
    L->Data[2]=2;
    L->Data[3]=3;
    L->Data[4]=4;
    L->Last=4;
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}
//List ReadInput(){
//	
//}
Position BinarySearch( List L, ElementType X ){
	int l=1;
	int r=L->Last;
	while(l<=r){
		int mid=(l+r)>>1;
		if(X<=L->Data[mid])
		r=mid;
		else
		l=mid+1;
	}
	return r;
} 
