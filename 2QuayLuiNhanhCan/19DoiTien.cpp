#include<bits/stdc++.h>
using namespace std;
int n,s,a[50],arr[50];
bool check;
int m=-1;
void nhap(){
	check=true;
	cin>>n>>s;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	arr[0]=0;
}
void cong(int k){
	int sums=0;
	for(int i=1;i<=k;i++)
	sums+=a[arr[i]];
	if(sums==s) {
		check=false;
		m=k;
	}
}
void solve(int i,int k){
	if(check)
	for(int j=arr[i-1]+1;j<=n-k+i;j++){
		arr[i]=j;
		if(i==k) cong(k);
		else solve(i+1,k); 
	}
}
main(){
	nhap();
	for(int i=1;i<=n;i++)
	if(check)	solve(1,i);
	cout<<m;
}