#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
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
	cout<<"Buoc "<<i+1<<": ";
	for(int h=0;h<n;h++) cout<<a[h]<<" ";
	cout<<endl;
	}
}

