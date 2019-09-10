#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	m=m%n;
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=m;;i++){
		if(i==n)
		i=0;
		printf("%d",a[i]);
		if(i==m-1)
		break;
		printf(" ");
	}
	return 0;
}
