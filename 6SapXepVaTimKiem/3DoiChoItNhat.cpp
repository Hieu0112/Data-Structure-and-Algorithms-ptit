#include<bits/stdc++.h>
using namespace std;
int n,a[1009],dem;
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	dem=0;
} 
void DoiChoItNhat(int a[],int n)//Doi Co Truc Tiep
{
	for(int i=0;i<n-1;i++)
	{
		int x=i;
		int y=a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]<y){
				x=j;
				y=a[j];
			}
		}
		swap(a[i],a[x]);
		if(x!=i){
			dem++;
		}
	}
	cout<<dem<<endl;
}
main()
{
	int t;
	cin>>t;
	while(t--){
		nhap();
		DoiChoItNhat(a,n);
	}
}
