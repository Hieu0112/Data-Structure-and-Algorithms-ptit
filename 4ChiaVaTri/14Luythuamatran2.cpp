#include<bits/stdc++.h>
using namespace std;
int n,k,mod=1e9+7;
vector<vector<long long>>operator*(vector<vector<long long>> b, vector<vector<long long>> c){
	vector<vector<long long>>kq(n, vector<long long> (n));
	
	for(int i=0;i<b.size();i++)
		for(int j=0;j<c.size();j++)
			for(int k=0;k<b.size();k++){
				kq[i][j]+=(b[i][k]*c[k][j])%mod;
				kq[i][j]%=mod;
			}
	return kq;		
}
vector<vector<long long>>mu(vector<vector<long long>> a, long long k){
	if(k==1) return a;
	else
		{
			vector<vector<long long>>x=mu(a,k/2);
			if(k%2==0) return x*x;
			else return x*x*a;
		}
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<vector<long long>> a(n, vector<long long>(n));
		for(int i=0; i<n;i++)
		for(int j=0;j<n;j++)
		cin>>a[i][j];
		a=mu(a,k);
		long long count= 0;
		for(int i = 0; i < n; i++)
			count = (count + a[i][n-1])%mod;
		cout << count << endl;
	}
}

