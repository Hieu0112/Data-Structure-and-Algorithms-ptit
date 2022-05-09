#include<bits/stdc++.h>
using namespace std;
int n,d;
string str;
void nhap(){
	cin>>n>>d;
	str="";
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
	cout<<str;
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		if(d*9<n) cout<<-1;
		else 
		solve();
		cout<<endl;
	}
}