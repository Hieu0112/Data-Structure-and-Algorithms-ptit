#include<bits/stdc++.h>
using namespace std;
string s;
void nhap(){
	cin>>s;
}
void solve(){
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='0') s[i]+=1;
		else{
			s[i]='0';
			break;
		}
	}
	cout<<s<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		solve();
	}
}

