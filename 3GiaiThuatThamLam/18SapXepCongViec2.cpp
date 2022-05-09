#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
struct CV{
	int x,y,z;
};
bool cmp(CV a,CV b){
	return a.z>b.z;
}
main(){
	int done[1001];
	test(){
		int n;
		cin>>n;
		CV a[n];
		memset(done,0,sizeof(done));
		for(int i=0;i<n;i++)	cin>>a[i].x>>a[i].y>>a[i].z;
		sort(a,a+n,cmp);
		int dem=0,deadline=0;
		for(int i=0;i<n;i++){
			while(done[a[i].y]&&a[i].y>0) a[i].y--;
			if(a[i].y>0){
				done[a[i].y]=1;
				dem++;
				deadline+=a[i].z;
			}
		}
	cout<<dem<<" "<<deadline<<endl;
	}
}