#include<bits/stdc++.h>
using namespace std;
int N,W,maxs=0;
int a[100],x[100],c[100],as[100];
int FOPT=0;
void input(int *a1,int n){
	for(int i=0;i<n;i++)
	cin>>a1[i];
}

void nhap(){
	cin>>N>>W;
	input(a,N);//gia tri su dung
	input(c,N);//khoi luong
}
void OK(int *x,int n){
	int s=0,ss=0;
	for(int i=0;i<n;i++){
		s+=a[i]*x[i];
		ss+=c[i]*x[i];
	}
	if(ss<=W&&s>FOPT){
		FOPT=s;
		for(int i=0;i<n;i++)
		as[i]=x[i];
	}
}
void solve(int i){
	for(int j=0;j<=1;j++)
	{
		x[i]=j;
		if(i==N-1) OK(x,N);
		else solve(i+1);
	}
}
void output(int *as,int n){
	cout<<FOPT<<endl;
	for(int i=0;i<n;i++)
	cout<<as[i]<<" ";
}
main(){
	nhap();
	solve(0);
	output(as,N);
}