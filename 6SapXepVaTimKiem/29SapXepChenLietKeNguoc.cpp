#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
	int arr[n][n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]<a[j]){
				int x=a[i];
				int t=a[j];
				for(int m=j+1;m<=i;m++)
				{
					int k=a[m];
					a[m]=t;
					t=k;					
				}
				a[j]=x;
			}
		}
		
		for(int h=0;h<=i;h++)
		arr[i][h]=a[h];
	}
	int l=-1;
	for(int i=n-1;i>=0;i--){
		l++;
		cout<<"Buoc "<<i<<": ";
	for(int j=0;j<n-l;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;
	}
}
