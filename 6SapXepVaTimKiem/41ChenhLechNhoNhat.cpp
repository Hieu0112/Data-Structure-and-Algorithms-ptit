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
		long a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		long mins=a[1]-a[0];
		for(int i=1;i<n;i++)
		mins=min(mins,a[i]-a[i-1]);
		cout<<mins<<endl;
	}
}
