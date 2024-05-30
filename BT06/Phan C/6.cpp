#include <bits/stdc++.h>  
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

bool areCoprime(int a, int b) {
  	return gcd(a, b) == 1;
}

int main() {
	int a, b;
	cin >> a;
	cin >> b;

	int GCD = gcd(a, b);
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << GCD << endl;

	if (areCoprime(a, b)) {
		cout << a << " va " << b << " la nguyen to cung nhau." << endl;
	} else {
		cout << a << " va " << b << " khong phai nguyen to cung nhau." << endl;
	}

	return 0;
}