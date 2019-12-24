#include<stdio.h>
int vis[20];
void dfs(int n,int x,int k){
	if(n==0){
		printf("%d\n",x);
		return ;
	}
	for(int i=1;i<=k;i++){
		if(vis[i])
		continue;
		vis[i]=1;
		dfs(n-1,x*10+i,k);
		vis[i]=0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	dfs(n,0,n);
	return 0;
}
