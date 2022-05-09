#include<bits/stdc++.h>
using namespace std;
int n,s,a[30],arr[30],m,t;
bool ok;
void nhap(){
	ok=true;
	m=-1;
	cin>>n>>s;
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	a[0]=0;
}
void Cong(int k){
	int sums=0;
	for(int i=1;i<=k;i++)
	sums+=arr[a[i]];
	if(sums==s){
		ok=false;
		m=k;
	}
}
void solve(int i,int k){
	if(ok)
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) Cong(k);
		else solve(i+1,k);
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		for(int i=1;i<=n;i++)
		if(ok) solve(1,i);
		cout<<m<<endl;
	}
}
