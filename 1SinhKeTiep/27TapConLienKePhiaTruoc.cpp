#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[k+1];
		for(int i=1;i<=k;i++) cin>>a[i];
		
		int j=k;
		while(a[j]-a[j-1]==1&&j>1)	j--;
		if(j==1&&a[j]==1)
			for(int i=n-k+1;i<=n;i++)
			cout<<i<<" ";
		else{
			a[j]--;
			for(int h=j+1;h<=k;h++)
			a[h]=n-k+h;
			
			for(int i=1;i<=k;i++)
			cout<<a[i]<<" ";
		}
		cout<<endl;	
	}
} 

