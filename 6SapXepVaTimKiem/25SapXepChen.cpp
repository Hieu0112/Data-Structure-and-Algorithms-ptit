#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]<a[j]) {
				int x=a[i];
				int y=a[j];
				for(int m=j+1;m<=i;m++)
				{
					int k=a[m];
					a[m]=y;
					y=k;
				}
				a[j]=x;
			}
		}
		
		cout<<"Buoc "<<i<<": ";
		for(int h=0;h<=i;h++)
		cout<<a[h]<<" ";
		cout<<endl;
	}
}
