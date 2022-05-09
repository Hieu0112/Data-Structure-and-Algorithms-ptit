#include<bits/stdc++.h>
using namespace std;
#define vs vector<vector<long long>>
int t,n,k,mod=1e9+7,x;
vs a;
vector<long long>a1;
void nhap(){
	a.clear();
	cin>>n>>k;
	for(int i=0;i<n;i++){
	a1.clear();
	for(int j=0;j<n;j++){
	cin>>x;a1.push_back(x);}
	a.push_back(a1);
}	
}
vs tich(vs b,vs c){
	vs l(n,vector<long long>(n));
	for(int i=0;i<b.size();i++)
	for(int j=0;j<b.size();j++)
	for(int k=0;k<b.size();k++)
	l[i][j]=(l[i][j]+(b[i][k]*c[k][j])%mod)%mod;
	return l;
}
vs solve(vs a,int k){
	if(k==1) return a;
	vs m=solve(a,k/2);
	if(k%2==0) return tich(m,m);
	else return tich(tich(m,m),a);
}
void xuat(){
	long long kq=0;
	for(int i=0;i<n;i++)
	kq=(kq+a[i][n-1])%mod;
	cout<<kq;
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		a=solve(a,k);
		xuat();
		cout<<endl;
	}
}
