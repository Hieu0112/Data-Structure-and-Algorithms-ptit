#include<bits/stdc++.h>
using namespace std;
int a[10][10],n,t,k;
char arr[200];
vector<string>v;
void nhap(){
	v.clear();
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		cin>>a[i][j];
}
void xuat(char *arr,int t){
	string tr="";
	for(int i=0;i<t;i++)
	tr+=arr[i];
	v.push_back(tr);
}
void solve(int i,int j,int x){
	
	if(i==n-1&&j==n-1)	xuat(arr,x);
		
	else{
		if(a[i+1][j]&&i+1<=n-1){
			a[i+1][j]=0;
			arr[x]='D';
			solve(i+1,j,x+1);
			a[i+1][j]=1;
		}
		
		if(a[i][j+1]&&j+1<=n-1){
			a[i][j+1]=0;
			arr[x]='R';
			solve(i,j+1,x+1);
			a[i][j+1]=1;
		}
		
		if(a[i][j-1]&&j-1>=0){
			a[i][j-1]=0;
			arr[x]='L';
			solve(i,j-1,x+1);
			a[i][j-1]=1;
		}
		
		if(a[i-1][j]&&i-1>=0){
			a[i-1][j]=0;
			arr[x]='U';
			solve(i-1,j,x+1);
			a[i-1][j]=1;
		}
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		if(a[0][0]==0||a[n-1][n-1]==0) cout<<"-1";
		else {
		    a[0][0]=0;
		solve(0,0,0);
		if(v.size()==0) cout<<"-1";
		else{
			sort(v.begin(),v.end());
			for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		}
		}
		cout<<endl;
	}
}

//#include<bits/stdc++.h>
//using namespace std;
//int a[10][10],n,t,k;
//string s;
//vector<string>res;
//void nhap(){
//	res.clear();
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	for(int j=1;j<=n;j++)
//		cin>>a[i][j];
//}
//void solve(int i,int j,string s){
//	
//	if(i==n&&j==n)	res.push_back(s);
//		
//	else{
//		if (i+1 <= n && a[i+1][j]) {
//        a[i][j]=0;
//        solve(i+1,j,s+"D");
//        a[i][j] = 1;
//   		}
//   		
//   		if (j+1 <= n && a[i][j+1]) {
//        a[i][j]=0;
//        solve(i,j+1,s+"R");
//        a[i][j] = 1;
//   		}
//    
//		if(a[i][j-1]&&j-1>=1){
//			a[i][j]=0;
//			solve(i,j-1,s+"L");
//			a[i][j]=1;
//		}
//		
//		if(a[i-1][j]&&i-1>=1){
//			a[i][j]=0;
//			solve(i-1,j,s+"U");
//			a[i][j]=1;
//		}
//	}
//}
//main(){
//	cin>>t;
//	while(t--){
//		nhap();
//		if(a[1][1]==0||a[n][n]==0) cout<<"-1";
//		else {
//		solve(1,1,"");
//		if(res.size()==0) cout<<"-1";
//		else{
//			sort(res.begin(),res.end());
//			for(int i=0;i<res.size();i++)
//			cout<<res[i]<<" ";
//		}
//		}
//		cout<<endl;
//	}
//}