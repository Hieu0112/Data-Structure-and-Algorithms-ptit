#include<bits/stdc++.h>
using namespace std;
int n,k,s,dem;
int a[20],arr[20];
void ss(){
	int count=0;
	for(int i=1;i<=k;i++) count+=a[i];
	if(s==count)	dem++;	
}
void solve(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k)  ss();
		else solve(i+1);
	}
}

main()
{
	a[0]=0;
	while(true){
		dem=0;
		cin>>n>>k>>s;
		if(n==0&&k==0&&s==0) break;
		else solve(1);
		cout<<dem<<endl;
	}
}