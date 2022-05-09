#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n];
	for(auto &x:a)	cin>>x;
	sort(a,a+n);
	int max2_1=0,max2_2=0,max3_1=0,max3_2;
	max2_1=a[0]*a[1];
	max2_2=a[n-1]*a[n-2];
	max3_1=a[0]*a[1]*a[n-1];
	max3_2=a[n-3]*a[n-2]*a[n-1];
	cout<<max(max(max2_1,max3_1),max(max2_2,max3_2));
}