#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define ll long long
int mod=1e9+7;
struct	Ma_Tran_Fibonaci{
	ll F[2][2];
};
Ma_Tran_Fibonaci operator *(Ma_Tran_Fibonaci a,Ma_Tran_Fibonaci b){
	Ma_Tran_Fibonaci result;
	for(int i=0;i<=1;i++)
	for(int j=0;j<=1;j++){
		result.F[i][j]=0;
	for(int k=0;k<=1;k++)
		result.F[i][j]=(result.F[i][j]+(a.F[i][k]*b.F[k][j])%mod)%mod;
	}
	return result;
}
Ma_Tran_Fibonaci Fibonaci_pow_n(Ma_Tran_Fibonaci a,ll k){
	if(k==1) return a;
	Ma_Tran_Fibonaci x=Fibonaci_pow_n(a,k/2);
	if(k%2==0) return x*x;
	else return a*x*x;
}
main(){
	Ma_Tran_Fibonaci a,result;
	a.F[0][0]=1;
	a.F[0][1]=1;
	a.F[1][0]=1;
	a.F[1][1]=0;
	test(){
		int n;
		cin>>n;
		result=Fibonaci_pow_n(a,n);
		cout<<result.F[0][1]<<endl;
	}
}