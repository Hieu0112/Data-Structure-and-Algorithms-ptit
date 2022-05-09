#include<bits/stdc++.h>
using namespace std;
int Day_Tang[1001];
void Solve(int *a,int n){
	int maxs=0;
	memset(Day_Tang,0,sizeof(Day_Tang));
	for(int i=0;i<n;i++)
	{
		Day_Tang[i]=1;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j]) Day_Tang[i]=max(Day_Tang[i],Day_Tang[j]+1);
			maxs=max(maxs,Day_Tang[i]);
		}
	}
	cout<<maxs;
}
main(){
	int n;
	cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	Solve(a,n);
}