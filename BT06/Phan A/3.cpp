#include <bits/stdc++.h>  
using namespace std;

void triple1(int n) { 
	cout << "1. &n = " << &n << endl;
	n *= 3;
}

void triple2(int& n) {
	cout << "2. &n = " << &n << endl;
	n *= 3;
}

int main() {
	int x = 5;
	cout << "&x = " << &x << endl;
	triple1(x);
	triple2(x);
	return 0;
}

//    &x = 0x61ff0c
// 1. &n = 0x61fef0 tham tri
// 2. &n = 0x61ff0c tham chieu