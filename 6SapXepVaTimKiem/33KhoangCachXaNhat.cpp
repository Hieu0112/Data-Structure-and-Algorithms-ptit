#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first < b.first;
}
int merge(int l,int m,int r){
	int u=l , o = m , g=r;
	vector<pair<int,int>> x(v.begin()+l,v.begin()+m+1);
	vector<pair<int,int>> y(v.begin()+m+1 , v.begin()+r+1);
	vector<int> k(r-m);
	k[r-m-1] = y[r-m-1].second;
	for(int i= r-m-2 ;i>=0 ;i--){
		k[i] = max(y[i].second , k[i+1]);
	}
	int dem = -1, i=0 , j=0;
	while(i < x.size() && j < y.size()){
		if(x[i].first <= y[j].first){
			if(x[i].first < y[j].first) dem = max(dem , k[j]-x[i].second);
			else{
			    int a=upper_bound(y.begin()+j, y.end() ,x[i],cmp ) - y.begin();
			    if(a != y.end() -y.begin()){
				dem = max(dem , k[a]-x[i].second);}
			}
			v[l] = x[i];
			l++; i++;
		}else{
			v[l] = y[j];
			l++;
			j++;
		}
	}
	while(i < x.size()){
		v[l] = x[i];
		l++;i++;
	}
	while(j < y.size()){
		v[l] = y[j];
		l++;j++;
	}
	return dem;
}
int mergeSort( int l,int r){
	int dem = -1;
	if(l < r){
		int m = (l+r)/2;
		dem = max(dem , mergeSort(l,m));
		dem = max(dem , mergeSort(m+1,r));
		dem = max(dem , merge(l,m,r));
	}
	return dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		v.clear();
		for(int i=0 ;i < n;i++){
			cin >> a[i];
			v.push_back({a[i],i});
		}
		int k = mergeSort(0,n-1);
		cout << k <<endl;
	}
}
