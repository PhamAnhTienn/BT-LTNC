/*Viết chương trình nhập một số nguyên dương N và in ra một tam giác kích thước N. 
Chẳng hạn với N bằng 5 thì tam giác có dạng như sau:
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(j >= i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}