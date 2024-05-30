
#include <bits/stdc++.h>  
using namespace std;

int main() {
	int x = 4, y = 5, z = 6;
	int a[3] = { 1, 2, 3 };
	int p = 7, q = 8;
	char b[3] = { 'a', 'b', 'c' };
	int m = 9, n = 10;

	cout << "Address of a: " << &a[0] << " " << &a[1] << " " << &a[2] << endl;
	cout << "Address of b: " << (void*)&b[0] << " " << (void*)&b[1] << " " << (void*)&b[2] << endl;
	cout << "Address of others: " << &x << " " << &y << " "<< &z << " "	<< &p << " " << &q << " " << &m << " " << &n << endl;            
	return 0;
}

// Address of a: 0x61fef8 0x61fefc 0x61ff00
// Address of b: 0x61feed 0x61feee 0x61feef
// Address of others: 0x61ff0c 0x61ff08 0x61ff04 0x61fef4 0x61fef0 0x61fee8 0x61fee4
// Nhan xet: Dia chi cac phan tu lien tiep cua a tang dan 4 byte
//           Dia chi cac phan tu lien tiep cua b tang dan 1 byte
// dia chi cac bien con lai ngau nhien.