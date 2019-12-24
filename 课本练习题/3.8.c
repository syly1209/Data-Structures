#include<stdio.h>
#include<string.h>
char s[200];
int top;
char p[2000];
int f;
void print(char k){
	f=1;
	if(k=='\\')
	printf("NO\n/*-?");
	if(k=='(')
	printf("NO\n(-?");
	if(k=='/')
	printf("NO\n?-*/");
	if(k==')')
	printf("NO\n?-)");
	if(k=='{')
	printf("NO\n{-?");
	if(k=='}')
	printf("NO\n?-}");
	if(k=='[')
	printf("NO\n?[-");
	if(k==']')
	printf("NO\n?-]");
}
int main(){
	char w='\0';
	while(1){
		scanf("%s",p);
		if(strlen(p)==1&&p[0]=='.')
		break;
		int l=strlen(p);
		for(int i=0;i<l;i++){
			if(p[i]=='*'&&p[i+1]=='/'){
				if(s[top]=='\\'){
					top--;
				}
				else if(w=='\0'){
					w=top==0? '/':s[top];
				}
				i++;
			}
			if(p[i]==')'){
				if(s[top]=='('){
					top--;
				}
				else if(w=='\0'){
					w=top==0? p[i]:s[top];
				}
			}
			if(p[i]==']'){
				//printf("%c***\n",s[top]);
				if(s[top]=='['){
					top--;
				}
				else if(w=='\0'){
					w=top==0? p[i]:s[top];
				}
			}
			if(p[i]=='}'){
				if(s[top]=='{'){
					top--;
				}
				else if(w=='\0'){
					w=top==0? p[i]:s[top];
				}
			}
			if(p[i]=='/'&&p[i+1]=='*'){
				s[++top]='\\';
				i++;
			}
			if(p[i]=='('||p[i]=='{'||p[i]=='[')
			s[++top]=p[i];
		}
	}
	if(top==0&&w=='\0')
	printf("YES\n");
	else 
	print(w);
	return 0;
}
