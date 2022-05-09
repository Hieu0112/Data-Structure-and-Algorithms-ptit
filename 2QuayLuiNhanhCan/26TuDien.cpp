#include<bits/stdc++.h>
using namespace std;
string s[101];
char a[10][10];
int n,k,m;
bool check;
bool ok[10][10];
/*
	1 2 3
	4 5 6
	7 8 9
*/
int x[]={0,-1,-1,-1,0,1,1,1};//0x cot
int y[]={1,1,0,-1,-1,-1,0,1};//0y hang
void nhap(){
	cin>>k>>n>>m;
	for(int i=0;i<k;i++)
	cin>>s[i];
	
	check=true;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	cin>>a[i][j];
}
void solve(int i,int j,string ss){
	for(int is=0;is<k;is++)
	if(ss==s[is]) {
	cout<<ss<<" ";
	check=false;
	}
	
	for(int l=0;l<8;l++)
	{
		int x1=x[l]+i;
		int y1=y[l]+j;
		if(x1>=1&&y1>=1&&x1<=n&&y1<=m&&!ok[x1][y1]){
			ok[x1][y1]=true;
			solve(x1,y1,ss+a[x1][y1]);
			ok[x1][y1]=false;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			memset(ok,0,sizeof(ok));
			ok[i][j]=true;
			string s1="";
			solve(i,j,s1+a[i][j]);
		}
		if(check) cout<<-1;
		cout<<endl;
	}
}