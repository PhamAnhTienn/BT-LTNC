/*Viết chương trình nhập vào 1 số n (n < 100) và in ra ma trận n x n dạng như sau. 
Ví dụ:input
10
output:
  1  2  3  4  5  6  7  8  9 10
  2  3  4  5  6  7  8  9 10  1
  3  4  5  6  7  8  9 10  1  2
  4  5  6  7  8  9 10  1  2  3
  5  6  7  8  9 10  1  2  3  4
  ...
*/
#include <iostream>
using namespace std;

void matrix(int n) {
    if(n >= 100) cout << "Enter again";
    else {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << ((i + j) % n) + 1 << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    matrix(n);
}