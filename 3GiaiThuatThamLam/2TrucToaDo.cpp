#include<bits/stdc++.h>
using namespace std;
struct CV{
	int x,y;
};
bool cmp(CV a,CV b){
	return a.y<b.y;
}
void nhap(CV *a,int n){
	for(int i=0;i<n;i++)
	cin>>a[i].x>>a[i].y;
}
int Toi_Uu(CV *a,int n){
	int i=0,mins=1;
	for(int j=1;j<n;j++)
		if(a[i].y<=a[j].x){
			mins++;
			i=j;
		}
		return mins;
}
main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;CV a[n];
		nhap(a,n);
		sort(a,a+n,cmp);
		cout<<Toi_Uu(a,n)<<endl;
	}
}