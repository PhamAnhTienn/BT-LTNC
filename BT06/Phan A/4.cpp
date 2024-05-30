#include <bits/stdc++.h>  
using namespace std;

void NAME(string s) {
	cout << " Foo: &s = " << &s << endl;
	s.pop_back();
}

void ARRAY(int a[]) {
	cout << " Goo: &a = " << &a << endl;
	a[0] += 3;
}


int main() {
	string name = "Charlie";
	int a[3] = { 0, 1, 2 };

	NAME(name);
	ARRAY(a);

	cout << "name = " << name << endl << " b[0] = " << a[0] << endl;
	return 0;
}

// name va a[0] giu nguyen --> ca 2 deu pass-by-value