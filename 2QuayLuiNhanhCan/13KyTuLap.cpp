#include<bits/stdc++.h>
using namespace std;
string s[20];
int n,maxs=99999999;
bool ok[20]={};
int hv[20];
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>s[i];
}
void KQ(){
	int kytu=0;
	for(int i=1;i<n;i++){
		int n1=s[hv[i]].size();
		int n2=s[hv[i+1]].size();
		for(int i1=0;i1<n1;i1++)
			for(int i2=0;i2<n2;i2++)
				if(s[hv[i]][i1]==s[hv[i+1]][i2]){
					kytu++;
					if(kytu>=maxs) return ;
					break;
				}
		if(kytu>=maxs) return;
	}
	maxs=min(kytu,maxs);
}
void solve(int i){
	for(int j=1;j<=n;j++)
	{
		if(!ok[j]){
			ok[j]=true;
			hv[i]=j;
			if(i==n) KQ();
			else solve(i+1);
			ok[j]=false;
		}
	}
}
main(){
	nhap();
	solve(1);
	cout<<maxs;
}