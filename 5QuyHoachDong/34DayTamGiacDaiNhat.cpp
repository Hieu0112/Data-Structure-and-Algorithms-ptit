#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define PQ priority_queue<long long, vector<long long>, greater<int>>
main(){
	test(){
		int n,maxs=0;
		cin>>n;
		int nguoc[n],xuoi[n],a[n];
		for(auto &x:a)	cin>>x;
		xuoi[0]=1;
		nguoc[n-1]=1;
		
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]) xuoi[i]=xuoi[i-1]+1;
			else xuoi[i]=1;
		}
		
		for(int i=n-1;i>0;i--){
			if(a[i]<a[i-1]) nguoc[i-1]=nguoc[i]+1;
			else nguoc[i-1]=1;
		}
		
		for(int i=0;i<n;i++)
		maxs=max(maxs,xuoi[i]+nguoc[i]-1);
		cout<<maxs<<endl;
	}
}