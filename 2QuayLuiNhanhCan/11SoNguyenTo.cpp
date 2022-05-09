#include<bits/stdc++.h>
using namespace std;
int snt[200]={};
int so[200];
int n,s,p,h,t,m;
int arr[200],sok[200];
vector<string>ss;
void nhap()
{
	ss.clear();
	m=1;
	cin>>n>>p>>s;
	for(int j=1;j<h;j++){
	if(so[j]>=s) break; 	
	if(so[j]>p) sok[m++]=so[j];
	}
	arr[0]=0;
	m--;
}
void xuat(int *arr,int n){
	string s1="";
	int sp=0;
	for(int i=1;i<=n;i++){
		sp+=sok[arr[i]];
	s1+=to_string(sok[arr[i]])+" ";
}	
	if(sp==s)
	ss.push_back(s1);
}

void solve(int i){
	for(int j=arr[i-1]+1;j<=m-n+i;j++){
		arr[i]=j;
		if (i==n) xuat(arr,n);
		else solve(i+1);
	}
}
main(){
	h=1;
	snt[0]=snt[1]=1;
	for(int i=2;i<200;i++)
	if(!snt[i]){
		for(int j=2*i;j<200;j+=i)
		snt[j]=1;
		}
	for(int i=2;i<200;i++)
	if(!snt[i])		so[h++]=i;
		
	cin>>t;	
	while(t--){
	nhap();
	solve(1);
	sort(ss.begin(),ss.end());
	cout<<ss.size()<<endl;
	for(int i=0;i<ss.size();i++)
	cout<<ss[i]<<endl;
	}
}
	