#include<bits/stdc++.h>
using namespace std;
struct CV{
	int x,y;
};
bool cmp(CV a,CV b){
	return a.y<b.y;
}
void SX(CV a[],int n){
	int mins=1,i=0;
	for(int j=1;j<n;j++){
		if(a[i].y<=a[j].x){
			mins++;
			i=j;
		}
	}
	cout<<mins;
}
main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		CV a[n];
		for(int i=0;i<n;i++)	cin>>a[i].x;
		for(int i=0;i<n;i++)	cin>>a[i].y;
		
		sort(a,a+n,cmp);
		SX(a,n);
		cout<<endl;
	}	
}