#include <bits/stdc++.h>  
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int N;
	cout << "Nhap N: ";
	cin >> N;

	cout << "Cac so nguyen to nho hon " << N << ": ";
	for (int i = 2; i < N; i++) {
		if (isPrime(i)) {
		cout << i << " ";
		}
	}

	return 0;
}