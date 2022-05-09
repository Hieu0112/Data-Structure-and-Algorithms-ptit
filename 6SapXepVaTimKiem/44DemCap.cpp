#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		long dem=0;
		for(int i=0;i<n-1;i++)
		{
			int x=lower_bound(a,a+n,a[i]+k)-a-i-1;
			if(x>=0) dem+=x;
		}
		cout<<dem<<endl;
	}
}

