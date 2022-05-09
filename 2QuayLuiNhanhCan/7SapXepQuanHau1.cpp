#include<bits/stdc++.h>
using namespace std;
int a[30],maxs;
bool ok[30],xuoi[30],nguoc[30];
//xuoi : i-j+n
//nguoc: i+j-1
int n;
/*	1	 2	 3	 4	 5	 6	 7	 8
1	x11	x12	x13	x14	x15	x16	x17	x18
2	x21	x22	x23	x24	x25	x26	x27	x28
3	x31	x32	x33	x34	x35	x36	x33 x38
4	x41	x42	x13	x44	x45	x46	x47	x48
5	x51	x52	x13	x54	x55	x56	x57	x58
6	x61	x62	x13	x64	x65	x66	x67	x68
7	x71	x72	x13	x74	x75	x76	x77	x78
8	x81	x82	x83	x84	x85	x86	x87	x88

*/
void nhap(){
	cin>>n;
	maxs=0;
}
void solve(int i){
		for(int j=1;j<=n;j++){
			if(!ok[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
				ok[j]=xuoi[i-j+n]=nguoc[i+j-1]=true;
				if(i==n) maxs++;
				else solve(i+1);
				ok[j]=xuoi[i-j+n]=nguoc[i+j-1]=false;
			}
		}
}
main(){
	int t;
	cin>>t;
	while(t--){
	nhap();
	solve(1);
	cout<<maxs<<endl;
	}
}