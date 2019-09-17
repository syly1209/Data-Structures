#include<bits/stdc++.h>
using namespace std;
struct h{
	string a;
	string i;
	string o;
};
bool cmp1(h k,h b){
	return k.i<b.i;
}
bool cmp2(h k,h b){
	return k.o>b.o;
}
int main(){
	int n;
	cin>>n;
	h p[n+3];
	for(int i=0;i<n;i++)
	cin>>p[i].a>>p[i].i>>p[i].o;
	sort(p,p+n,cmp1);
	cout<<p[0].a<<" ";
	sort(p,p+n,cmp2);
	cout<<p[0].a;
	return 0;
} 
