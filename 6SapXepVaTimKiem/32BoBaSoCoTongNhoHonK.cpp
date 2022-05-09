#include<bits/stdc++.h>
using namespace std;
main(){
	long t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		
		long long dem=0;
		
		for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
		dem+=lower_bound(a,a+j,k-a[i]-a[j])-a;//Vị trí đầu tiên từ 0 đến j có gt bằng gt cần tìm;
		cout<<dem<<endl;
	}
}