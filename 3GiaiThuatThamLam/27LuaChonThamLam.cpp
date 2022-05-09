#include<bits/stdc++.h>
using namespace std;
int n,d;
string str,str1;
void nhap(){
	cin>>d>>n;
	str="";
	str1="";
}
void solve(){
	while(n>=9){
		str='9'+str;
		n-=9;
	}
	str=to_string(n)+str;
	int s=d-str.size();
	for(int i=0;i<s;i++)
	str='0'+str;
	for(int i=0;i<str.size();i++)
	str1=str[i]+str1;
	if(str[0]=='0')
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]!='0') {
				str[i]-=1;
				break;
			}
		}
		str[0]='1';
	}
	cout<<str<<" "<<str1;
}
main(){
	nhap();
	if(d*9<n||n==0) cout<<-1<<" "<<-1;
	else 
		solve();
}