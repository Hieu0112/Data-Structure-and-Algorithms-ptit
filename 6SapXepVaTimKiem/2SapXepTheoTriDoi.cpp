#include <bits/stdc++.h>
using namespace std;

void nhap (int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void xuat (int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sap_xep (int arr[], int n, int k) {
	for (int i = 0; i < n; i++) {
		bool check = false;
		for (int j = 0; j < n - 1; j++) {
			if(abs(k-arr[j])>abs(k-arr[j+1])){
				swap(arr[j], arr[j + 1]);
				check = true;
			}
		}
		if (check == false) {
			break;
		}
	}
}

int main () {
	int t; cin >> t;
	while (t--) {
		int n, k ; 
		cin >> n >> k;
		int arr[n + 1];
		nhap (arr, n);
		sap_xep(arr, n, k);
		xuat(arr, n);
	}
	return 0;
}
