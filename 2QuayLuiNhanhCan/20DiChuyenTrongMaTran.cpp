#include<bits/stdc++.h>
using namespace std;
main(){
	int s[100][100];
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
		cin>>arr[i][j];
		s[i][j]=1;
		}
		
		for(int i=n-2;i>=0;i--)
		for(int j=m-2;j>=0;j--)
		s[i][j]=s[i+1][j]+s[i][j+1];
		
		cout<<s[0][0]<<endl;
	}
}

//#include<bits/stdc++.h>
//using namespace std;
//long c[101][101];
//void C()
//{
//	for(int i=0;i<50;i++)
//	{
//		for(int j=0;j<=i;j++)
//		{
//			if(j==0||j==i)c[i][j]=1;
//			else
//			{
//				c[i][j]=c[i-1][j-1]+c[i-1][j];
//			}
//		}
//	}
//}
//int main()
//{
//	C();
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n,m;
//		cin>>n>>m;
//		int a[n][m];
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<m;j++)
//			{
//				cin>>a[i][j];
//			}
//		}
//		cout<<c[n+m-2][n-1]<<endl;
//	}
//}