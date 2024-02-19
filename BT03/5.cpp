/*Bảng xoắn ốc. Viết chương trình nhận input từ bàn phím gồm một cặp số x, y nguyên dương nhỏ hơn 10 và in ra màn hình một bảng x dòng y cột chứa các giá trị từ 1 đến x*y theo dạng xoắn ốc. Ví dụ
Sample Input
Sample Output
4 5
1   2  3  4  5
14 15 16 17  6
13 20 19 18  7
12 11 10  9  8

*/
#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
    void spiralMatrix(int x, int y) {
        vector<vector<int>> grid(x, vector<int>(y, 0));

        int value = 1;
        int left = 0, right = y - 1, top = 0, bottom = x - 1;

        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; ++i) {
                grid[top][i] = value++;
            }
            top++;

            for (int i = top; i <= bottom; ++i) {
                grid[i][right] = value++;
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; --i) {
                    grid[bottom][i] = value++;
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    grid[i][left] = value++;
                }
                left++;
            }
        }

        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int x, y;
    cin >> x >> y;
    Matrix m;
    m.spiralMatrix(x, y);
    return 0;
}


