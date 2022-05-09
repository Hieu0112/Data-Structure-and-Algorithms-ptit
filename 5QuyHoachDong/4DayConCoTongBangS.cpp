#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
int Sum[400001];
void solve(int *a,int n,int s){
	memset(Sum,0,sizeof(Sum));
	Sum[0]=1;
	for(int i=0;i<n;i++)
		for(int j=s;j>=a[i];j--){
			if(!Sum[s]&&Sum[j-a[i]])		Sum[j]=1;
		}
	if(Sum[s]) cout<<"YES";
	else cout<<"NO";
}
main(){
	int n,s;
	test(){
		cin>>n>>s;
		int a[n];
		for(auto &x:a)	cin>>x;
		solve(a,n,s);
		cout<<endl;
	}
}