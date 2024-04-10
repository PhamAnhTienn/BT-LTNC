#include <bits/stdc++.h>
using namespace std;

int main() {
    //đọc tràn
    char a[5] = {'A', 'B', 'C', 'D', 'E'};
    char var1 = 'F';
    char var2 = 'G';
    char var3 = 'H';

    cout << "Truy cập ngoài mảng:" << endl;
    cout << "a[-1] = " << a[-1] << endl;
    cout << "a[5] = " << a[5] << endl;
    cout << "a[6] = " << a[6] << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "var3 = " << var3 << endl;

    //ghi tràn
    char b[5];
    char var1b, var2b, var3b;

    b[-1] = 'X'; 
    b[5] = 'Y'; 
    b[6] = 'Z';

    cout << "Giá trị của các biến được khai báo xung quanh mảng:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "var3 = " << var3 << endl;

    //tràn mảng nhiều chiều
    char arr2D[3][4];

    for (int i = 0; i < 6; ++i) {
        arr2D[0][i] = 'X';
    }

    cout << "Mảng hai chiều sau khi ghi tràn dòng đầu tiên:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) { 
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }
}