#include<bits/stdc++.h>
using namespace std;
int a[20][20],arr[20];
int kq[100][100];
int n,k,l=0;
bool ok[20]={};
void nhap(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
}
void check(int *arr,int n){
	int ss=0,h=1;
	for(int i=1;i<=n;i++)
	ss+=a[h++][arr[i]];
	if(ss==k){
		for(int i=1;i<=n;i++)
			kq[l][i]=arr[i];
			l++;
	}
}

void solve(int i){
	for(int j=1;j<=n;j++)
	{
		if(!ok[j]){
			arr[i]=j;
			ok[j]=true;
			if(i==n) check(arr,n);
			else solve(i+1);
			ok[j]=false;
		}
	}
}
main(){
	nhap();
	solve(1);
	cout<<l<<endl;
	for(int i=0;i<l;i++){
	for(int j=1;j<=n;j++)
	cout<<kq[i][j]<<" ";
	cout<<endl;}
}