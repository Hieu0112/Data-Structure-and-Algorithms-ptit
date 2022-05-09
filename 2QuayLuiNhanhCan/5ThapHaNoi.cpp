#include<bits/stdc++.h>
using namespace std;
char a='A',b='B',c='C';
int n;
void nhap(){
	cin>>n;
}
void Di_Chuyen(int n,char a,char b,char c){
	if(n==1){
		cout<<a<<" -> "<<c<<endl;
		return;
		}
	Di_Chuyen(n-1,a,c,b);
	Di_Chuyen(1,a,b,c);
	Di_Chuyen(n-1,b,a,c);
}
main(){
	nhap();
	Di_Chuyen(n,a,b,c);
}