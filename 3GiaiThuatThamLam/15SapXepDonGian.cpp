#include<bits/stdc++.h>
using namespace std;
main(){
	int c[100009];
	int n,maxs=0;
	cin>>n;
	int a[n];

//4 	1 		2 		5 		3
//0 	1 		2 		3 		4
//   	c[0]+1  c[1]+1  c[2]+1	c[3]+1
//c[4]=1 c[1]=1 c[2]=2   c[5]=2   c[3]=3
	for(int i=0;i<n;i++)	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		c[a[i]]+=c[a[i]-1]+1;
//		cout<<a[i]<<" "<<c[a[i]]<<endl;
		maxs=max(maxs,c[a[i]]);
	}
	cout<<n-maxs;
}
//		4 1 2 5 3
//vt    1 2 3 4 5
//dem   1 1 1 1 1
//i tu 2
//	1 2 3 4 5
//	4 1 2 5 3
//	1 1 2 3 1
//if vt[i]>vt[i-1] dem[i]=dem[i-1]+1
//
//int vi_tri[100009];	 
//main(){
//	int n,maxs=0;
//	cin>>n;
//	int a[n];
//	vector<int>c(n+1,1);
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		vi_tri[a[i]]=i;
//	}
//	for(int i=2;i<=n;i++)
//		if(vi_tri[i]>vi_tri[i-1]){
//			c[i]=c[i-1]+1;
//			maxs=max(maxs,c[i]);
//		}
//	cout<<n-maxs;
//}