#include<iostream>
using namespace std;

int main() {
	int a[50];
	cout << "Mengisi Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Data Ke- " << (i) << ":";
		cin >> a[i];
	}
	cout << "Membaca Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Data Ke- " << (i + 1) << ":" << a[i] << endl;
	}
}