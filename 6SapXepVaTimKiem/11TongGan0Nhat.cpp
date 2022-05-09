#include<bits/stdc++.h>
using namespace std;
main()
{
	short t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		long summin =a[0]+a[1];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				long tong=a[i]+a[j];
				if(abs(summin)>abs(tong)) summin=tong;
			}
		}
		cout<<summin<<endl;
	}
}
