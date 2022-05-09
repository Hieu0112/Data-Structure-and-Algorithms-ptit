#include<bits/stdc++.h>
using namespace std;
int a[10][10],n,t;
string str="";
bool check;
void nhap(){
	check=true;
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
		cin>>a[i][j];
}
void solve(int i,int j,string s){
	if(i==n&&j==n) {
		check=false;
		cout<<s<<" ";
	}
	else{
		if(a[i+1][j]&&i+1<=n){
			a[i][j]=0;
			solve(i+1,j,s+"D");
			a[i][j]=1;
		}
		
		if(a[i][j+1]&&j+1<=n){
			a[i][j]=0;
			solve(i,j+1,s+"R");
			a[i][j]=1;
		}
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		if(a[1][1]==0||a[n][n]==0) cout<<"-1";
		else{
			solve(1,1,"");
			if(check) cout<<"-1";
		}
		cout<<endl;
	}
}