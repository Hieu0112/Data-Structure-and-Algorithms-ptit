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
	
for(int i=0;i<n-1;i++){
		int x=i,y=a[i];
	for(int j=i+1;j<n;j++)
	if(a[j]<y) {
		x=j;
		y=a[j];
	}
	swap(a[i],a[x]);
	
	for(int h=0;h<n;h++)
	arr[i][h]=a[h];
	}
	
	for(int i=n-2;i>=0;i--){
	cout<<"Buoc "<<i+1<<": ";
	for(int j=0;j<n;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;
	}
	}

