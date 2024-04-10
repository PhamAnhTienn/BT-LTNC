/*Dò mìn. Viết chương trình nhận input từ bàn phím gồm một cặp số m, n nguyên dương nhỏ hơn 10 và một bản đồ mìn 
dạng bảng, * nghĩa là có mìn, . là không có mìn, các kí tự cách nhau bởi 01 space. In ra màn hình một 
bảng m dòng n cột sao cho giá trị của mỗi ô là một dấu * nếu như ở đó có mìn, nếu không thì là một giá trị trong khoảng 
0...8 là số mìn nằm trong các ô xung quanh. Ví dụ
Sample Input
Sample Output
3 5
* * . . .
. . . . .
. * . . .
* * 1 0 0
3 3 2 0 0
1 * 1 0 0

Thảo luận: Thuật toán rất đơn giản, duyệt từng ô, với mỗi ô chỉ việc kiểm tra có mìn hay không và nếu không thì đếm 
số mìn xung quanh. Bài này chỉ phải nghĩ chút xíu về cách lưu trữ input. Bạn định dùng cách nào? m xâu kí tự? mảng 
char [m][n]? int [m][n]?... hãy chọn cách phù hợp nhất cho thuật toán mà bạn sẽ dùng.
*/

#include <iostream>
#include <vector>

using namespace std;

class Mine {
public:
    int count(const vector<vector<char>>& minefield, int row, int col, int m, int n) {
        int count = 0;
        for (int i = row - 1; i <= row + 1; ++i) {
            for (int j = col - 1; j <= col + 1; ++j) {
                if (i >= 0 && i < m && j >= 0 && j < n && !(i == row && j == col) && minefield[i][j] == '*') {
                    count++;
                }
            }
        }
        return count;
    }

    void grid(vector<vector<char>>& grid, int m, int n) {
        vector<vector<int>> result(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '*') {
                    cout << "* ";
                } else {
                    int minesCount = count(grid, i, j, m, n);
                    cout << minesCount << " ";
                }
            }
            cout << endl;
        }
    }
};


int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> grid(m, vector<char>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }
    Mine mine;
    mine.grid(grid, m, n);

    return 0;
}
