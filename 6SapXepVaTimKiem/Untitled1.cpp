#include<bits/stdc++.h>
using namespace std;
// y tuong tao 1 mang b sau do duyet tu phai mang a sang laay cac phan tu lon, sau do so sanh 2 mang
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		int b[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		b[n-1]=a[n-1];
		for(int i=n-2; i>=0; i--){
			b[i]=max(a[i], b[i+1]);
		}
		int d=0, i=0, j=0;
		while(i<n && j<n){
			if(b[j]>a[i]){
				d=max(d, j-i);
				j++;
			}else i++;
		}
		if(d==0) cout <<-1;
		else{
			cout <<d <<endl;
		}
		
	}
}

