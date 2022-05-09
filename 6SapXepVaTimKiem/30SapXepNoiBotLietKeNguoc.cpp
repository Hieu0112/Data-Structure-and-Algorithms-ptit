#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n],arr[n][n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int x=1;
	int h=0;
	while(true)
	{
		bool check=true;
		for(int i=0;i<n-1;i++)
		if(a[i]>a[i+1] ) swap(a[i],a[i+1]);
		
		for(int i=0;i<n-1;i++) {
		if(a[i]>a[i+1]) check=false;}
		
		for(int i=0;i<n;i++) arr[h][i]=a[i];
		h++;
		if(check) break;
	}
	for(int i=h-1;i>=0;i--){
	cout<<"Buoc "<<i+1<<": ";
	for(int j=0;j<n;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;
		}
	}
}

