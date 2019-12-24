#include<stdio.h>
int b[200000];
int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	long long ans=0;
	for(int i=0;i<n;i++){
		ans+=(n-i)*a;
		b[i]=ans%10;
		ans/=10;
	}
	if(ans)
	printf("%lld",ans);
	for(int i=n-1;i>=0;i--)
	printf("%d",b[i]);
	return 0;
}
