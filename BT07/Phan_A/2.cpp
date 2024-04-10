#include <iostream>

using namespace std;

void f(int arr[]) {
    cout << "Kích thước của mảng trong hàm f: " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int A[5] = {1, 2, 3, 4, 5};
    cout << "Kích thước của mảng A trong hàm main: " << sizeof(A) << " bytes" << endl;
    f(A);

    return 0;
}
