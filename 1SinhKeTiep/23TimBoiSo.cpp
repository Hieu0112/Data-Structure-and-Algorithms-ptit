#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[20],p,k;
long long maxs;
bool ok;
void nhap(){
	k=0;
	ok=true;
	cin>>n;
	p=n;
	while(p!=0){
		p/=10;
		k++;
	}
	m=k;
	maxs=1e18;
}
void in(){
	long long s=0;
	for(int i=0;i<m;i++)
	s=s*10+a[i];
	s*=9;
	if(s%n==0&&s>n){
		ok=false;
		maxs=min(maxs,s);
	}
}
void solve(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i==m-1) in();
		else solve(i+1);
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		while(m<18&&ok){
			solve(0);
			m++;
		}
		cout<<maxs<<endl;
	}
}