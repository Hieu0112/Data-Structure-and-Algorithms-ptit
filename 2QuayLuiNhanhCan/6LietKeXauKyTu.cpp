//#include<bits/stdc++.h>
//using namespace std;
//char x,x1='A'-1;
//int n,k;
//int a[20];
//bool check=true;
//void nhap(){
//	cin>>x>>k;
//	n=x-x1;
//	for(int i=1;i<=k;i++)
//	a[i]=1;
//}
//void xuat(int *a,int k){
//	check=false;
//	for(int i=1;i<=k;i++){
//	cout<<(char)(a[i]+x1);
//	if(a[i]!=n) check=true;
//	}
//	cout<<endl;
//}
//void Solve(){
//	int i=k;
//	while(a[i]==n&&i>0) i--;
//	a[i]++;
//	for(int j=i+1;j<=k;j++)
//	a[j]=a[j-1];
//}
//main(){
//	nhap();
//	while(check){
//		xuat(a,k);
//		Solve();
//	}
//}
#include<bits/stdc++.h>
using namespace std;
char x,x1='A'-1;
int n,k;
int a[30];
void nhap(){
	cin>>x>>n;
	k=x-x1;
	a[0]=1;
}
void xuat(int *a,int n){
	for(int i=1;i<=n;i++) cout<<char(a[i]+x1);
	cout<<endl;
}
void Solve(int j){
	for(int i=a[j-1];i<=k;i++){
		a[j]=i;
		if(j==n) xuat(a,n);
		else Solve(j+1);
	}
}
main(){
	nhap();
	Solve(1);
}