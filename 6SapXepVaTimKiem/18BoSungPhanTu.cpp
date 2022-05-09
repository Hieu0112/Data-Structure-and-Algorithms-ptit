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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int x=0;
		for(int i=1;i<n;i++){
			int k=1;
			while(a[i]>a[i-1]+k){
				x++;
				k++;
			}
		}
		cout<<x<<endl;
	}
}
