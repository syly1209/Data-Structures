#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	while(1){
	int l=-1;
	while((a[++l]=getchar())!='@');
	a[l]='\0';
	int m=l/2;
	//printf("%d",l);
	if(l%2==0||a[m]!='&')
	printf("No\n");
	else{
		int f=0;
		int i=0;
		int j=l-1;
		while(i<=j){
			if(a[i]!=a[j]){
				f=1;
				break;
			}
			i++;
			j--;
		}
		if(f==1)
		printf("No\n");
		else
		printf("Yes\n");
	}
	}
	
	return 0;
}
