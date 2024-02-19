/*Tương tự bài trên với dạng tam giác sau (với N bằng 5):
*********
 *******
  *****
   ***
    *
*/
#include <iostream>
using namespace std;

void drawTriangle(int rows) {
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    drawTriangle(5);
    return 0;
}