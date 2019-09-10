#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<char>p;
	int a,b;
	cin>>a>>b;
	int c=a+b;
	bool f=0;
	if(c<0)
	f=1;
	c=abs(c);
	int ans=0;
	if(c==0)
	p.push_back('0');
	while(c){
		if(ans%3==0&&ans!=0)
		p.push_back(',');
		p.push_back((c%10)+'0');
		ans++;
		c/=10;
	}
	if(f)
	p.push_back('-');
	for(int i=p.size()-1;i>=0;i--)
	cout<<p[i];
	return 0;
} 
