#include<bits/stdc++.h>
using namespace std;
int t,n;
//			x	34   8   10   3   2    80  30   33  1
//b[i]	    y 	80   80  80   80  80   80  33   33  1
//				6	 	      
//			y=	6	                        y
main(){
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		b[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--)
		b[i]=max(a[i],b[i+1]);
		
		int maxs=-1,x=0,y=0;
		while(x<n && y<n){
			if(a[x]<b[y]){
				maxs=max(y-x,maxs);
				y++;
			}
			else	x++;
		}
		
		if(maxs==0) cout<<-1<<endl;
		else
		cout<<maxs<<endl;
	}
}