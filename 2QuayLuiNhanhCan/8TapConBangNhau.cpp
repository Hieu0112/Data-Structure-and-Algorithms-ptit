#include<bits/stdc++.h>
using namespace std;
int t,n,a[101],sums;
bool ok;

void nhap(){
	
	ok=true;
	sums=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sums+=a[i];
	}
	sort(a,a+n);
}
void solve(int i,int s){
	for(int j=i;j<n;j++){
		
		s+=a[j];
		if(!ok||s>sums/2) return;
		
		if(s==sums/2) ok=false;
		
		else solve(i+1,s);
		s-=a[j];
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		if(sums%2==0)	solve(0,0);
		if(ok) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}