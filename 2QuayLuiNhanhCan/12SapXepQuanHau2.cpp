#include<bits/stdc++.h>
using namespace std;
int a[9][9],n,t,maxs;
bool ok[10],nguoc[10],xuoi[10];
void nhap(){
	maxs=0;
	n=8;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
}
void solve(int i,int s){
	for(int j=1;j<=n;j++)
	if(!ok[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
		ok[j]=xuoi[i-j+n]=nguoc[i+j-1]=true;
		s+=a[i][j];
		if(i==n) maxs=max(maxs,s);
		else solve(i+1,s);
		ok[j]=xuoi[i-j+n]=nguoc[i+j-1]=false;
		s-=a[i][j];
	}
}

main(){
	cin>>t;
	while(t--){
		nhap();
		solve(1,0);
		cout<<maxs<<endl;
	}
}