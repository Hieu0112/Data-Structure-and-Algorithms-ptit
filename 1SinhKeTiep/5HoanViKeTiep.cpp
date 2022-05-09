#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n;
	cin>>t;
	while(t--)
	{
		bool check=false;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		for(int i=n-1;i>0;i--)
		{
			int x=i;
			if(a[i]>a[i-1])
			{
				check=true;
				for(int j=x;j<n;j++)
				{
					if(a[j]>a[i-1]&&a[j]<a[i]){
						x=j;
					}
				}
			swap(a[i-1],a[x]);
			for(int j=i;j<n-1;j++)
			for(int h=i+1;h<n;h++)
			if(a[j]>a[h]) swap(a[j],a[h]);
			break;
		}
		}
		if(check) for(int i=0;i<n;i++) cout<<a[i]<<" ";
		else for(int i=1;i<=n;i++) cout<<i<<" ";
		cout<<endl;
	}
} 

