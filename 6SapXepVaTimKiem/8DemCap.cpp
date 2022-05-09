#include<bits/stdc++.h>
using namespace std;
void nhap_mang(int *a,int n){
	for(int i=0;i<n;i++)
	cin>>a[i];
}

//x<y thi x mu y >y mu x
int dem_ptu(int x,int*y,int m,int*dem){
	if(x==0) return 0;
	if(x==1) return dem[0];
	int vitri_xbey=upper_bound(y,y+m,x)-y;
	int ptu_tm=m-vitri_xbey;
	ptu_tm+=dem[0]+dem[1];
	if(x==2)
	ptu_tm-=(dem[3]+dem[4]);
	if(x==3) 
	ptu_tm+=dem[2];
	return ptu_tm;
}

int kq(int *x,int n,int *y,int m){
	int dem[5]={0};
	for(int i=0;i<m;i++)
	if(y[i]<=4)		dem[y[i]]++;
	int result=0;
	for(int i=0;i<n;i++)
	result+=dem_ptu(x[i],y,m,dem);
	return result;
}

main(){
	int n,m,t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int x[n],y[m];
		nhap_mang(x,n);
		nhap_mang(y,m);
		sort(y,y+m);
		cout<<kq(x,n,y,m)<<endl;
	}
}