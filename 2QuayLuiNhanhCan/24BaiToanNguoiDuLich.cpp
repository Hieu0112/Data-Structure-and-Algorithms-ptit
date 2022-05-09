#include<bits/stdc++.h>
using namespace std;
int a[20][20],cmin=99999,ok[30],n,s=0,FOPT=100000;
int x[20];
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++){
	cin>>a[i][j];
	cmin=min(a[i][j],cmin);
	}
	memset(ok,1,sizeof(ok));
	ok[1]=0;
	x[1]=1;
}
void solve(int i){
	if(s+cmin*(n-i+1)>=FOPT) return ;
	
		for(int j=2;j<=n;j++)
		{
			if(ok[j]){
				ok[j]=0;
				x[i]=j;
				s+=a[x[i-1]][x[i]];
				if(i==n) FOPT=min(FOPT,s+a[x[n]][1]);
				else solve(i+1);
				ok[j]=1;
				s-=a[x[i-1]][x[i]];
			}
		}
}
main(){
	nhap();
	solve(2);
	cout<<FOPT;
}