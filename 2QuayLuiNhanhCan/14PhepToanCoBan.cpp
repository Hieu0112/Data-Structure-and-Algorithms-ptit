#include<bits/stdc++.h>
using namespace std;
string s,str;
int t;
bool check;
void nhap(){
	s="WRONG PROBLEM!";
	getline(cin,str);
	check=true;
}
bool solve(string str){
	int a=(str[0]-'0')*10+(str[1]-'0');
	int b=(str[5]-'0')*10+(str[6]-'0');
	int c=(str[10]-'0')*10+(str[11]-'0');
	char x=str[3];
	if(a<10||b<10||c<10) return false;
	if(x=='+')
		if(a+b==c) return true;
	if(x=='-')
		if(a-b==c) return true;
	if(x=='*')
		if(a*b==c) return true;
	if(x=='/'&&b!=0&&a%b==0)
		if(a/b==c) return true;
	return false;		
}
void kq(int i){
	if(!check) return;
	if(i==3){
		if(str[i]=='?'){
			str[i]='+';
			kq(i+1);
			str[i]='-';
			kq(i+1);
			str[i]='*';
			kq(i+1);
			str[i]='/';
			kq(i+1);
			str[i]='?';
		}
		else kq(i+1);
	}
	else{
		if(i==12&&str[i]!='?'){
			if(solve(str)){
				check=false;
				s=str;
			}
		}
		else if(str[i]=='?'){
			for(int j='0';j<='9';j++)
			{
			str[i]=j;
			kq(i+1);
			str[i]='?';
			}
		}
		else kq(i+1);
	}
}
main(){
	cin>>t;
	cin.ignore();
	while(t--){
		nhap();
		kq(0);
		cout<<s<<endl;
	}
}