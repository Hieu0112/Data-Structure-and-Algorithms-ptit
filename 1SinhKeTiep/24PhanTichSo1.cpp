//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a[50];
//void nhap(){
//	cin>>n;
//}
//void xuat(int n){
//	cout<<"(";
//	for(int i=1;i<n;i++)
//	cout<<a[i]<<" ";
//	cout<<a[n];
//	cout<<")";
//	cout<<" ";
//}
//void solve(int x,int i,int s)
//{
//	for(int j=x;j>=1;j--){
//		a[i]=j;
//		if(j==s) xuat(i);
//		else if(s>j)
//		solve(j,i+1,s-j);
//	}
//}
//main(){
//	int t;
//	cin>>t;
//	while(t--){
//		nhap();
//		solve(n,1,n);
//		cout<<endl;
//	}
//}

#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>>arr;
vector<int>a;
void nhap()
{
	arr.clear();
	a.clear();
	cin>>n;
}
void KQ(){
		cout<<"(";
		for(int j=0;j<a.size()-1;j++)
		cout<<a[j]<<" ";
		cout<<a[a.size()-1];
		cout<<") ";
}
void solve(int sum,int k){
	for(int i=k;i>=1;i--){
		if(sum==i) {
			a.push_back(i);
			KQ();
			a.pop_back();
			}
		else if(sum>i){
			a.push_back(i);
			solve(sum-i,i);
			a.pop_back();
		}
	}
}
//void xuat(){
//	for(int i=0;i<arr.size();i++)
//	{	cout<<"(";
//		for(int j=0;j<arr[i].size()-1;j++)
//		cout<<arr[i][j]<<" ";
//		cout<<arr[i].size()-1;
//		cout<<") ";
//	}
//}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(n,n);
//		xuat();
		cout<<endl;
	}
}