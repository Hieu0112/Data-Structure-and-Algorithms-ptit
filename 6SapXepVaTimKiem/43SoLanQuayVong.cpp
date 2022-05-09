#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,count=0;
		
		cin>>n;
		
		long long a[n],arr[n];
		for(long i=0;i<n;i++)
		a[i]=i+1;
		
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		
		while(true){
		bool check=true;
			for(long i=0;i<n;i++)
			if(a[i]!=arr[i]){
				check=false;
				break;
			}
			
			if(check) break;
			long long x=a[n-1],x1=a[0];
			for(long i=1;i<n;i++)
			{
				long long z=a[i];
				a[i]=x1;
				x1=z;
			}
			a[0]=x;
			count++;
		}
		cout<<count<<endl;
	}
}
