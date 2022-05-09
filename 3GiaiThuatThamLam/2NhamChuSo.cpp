#include<bits/stdc++.h>
using namespace std;
string doi(string a,char b){
	char x='5';
	if(b=='5') x='6';
	for(int i=0;i<a.size();i++)
		if(a[i]==b) a[i]=x;
	return a;
}
int so(string s){
	int so=0;
	for(int i=0;i<s.size();i++)
	so=so*10+(s[i]-'0');
	return so;
}
main(){
	string a,b;
	cin>>a>>b;
	a=doi(a,'6');
	b=doi(b,'6');
	cout<<so(a)+so(b)<<" ";
	a=doi(a,'5');
	b=doi(b,'5');
	cout<<so(a)+so(b);
}