#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define PQ priority_queue<long long, vector<long long>, greater<int>>
#define ll long long
main(){
	int dp[100][100];
	test(){
		memset(dp,0,size);
		string s,sa;
		cin>>s;
		sa=s;
		reverse(sa.begin(),sa.end());
		for(int i=1;i<=s.size();i++)
			for(int j=1;j<=s.size();j++)
				{
					if(s[i-1]==sa[j-1])	dp[i][j]=dp[i-1][j-1]+1;
					else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
		cout<<s.size()-dp[s.size()][s.size()]<<endl;
	}
}