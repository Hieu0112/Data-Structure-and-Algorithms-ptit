#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x=-2;
		cin>>n;
		int a[n];
		
		long s1=0,s2=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s1+=a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			s2+=a[i];
			if(s1-s2+a[i]==s2){
				x=i;
				break;
			}
		}
		cout<<x+1<<endl;
	}
} 
