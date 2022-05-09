#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],x[n],ng[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		x[0]=1;
		ng[n-1]=1;
		
		for(int i=1;i<n;i++)
		if(a[i]>a[i-1]) x[i]=x[i-1]+1;
		else x[i]=1;
		
		for(int i=n-2;i>=0;i--)
		if(a[i]>a[i+1]) ng[i]=ng[i+1]+1;
		else ng[i]=1;
		
		int check=-1;
		for(int i=0;i<n;i++)
		check=max(check,x[i]+ng[i]-1);
		cout<<check<<endl;
	}
}