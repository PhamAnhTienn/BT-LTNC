/*Ma trận kì ảo. Viết chương trình nhập một số nguyên dương lẻ N và in ra ma trận kì ảo kích thước N * N. 
Ma trận kì ảo là bảng vuông chứa các số từ 1 đến N*N có tính chất như sau: mỗi số xuất hiện đúng một lần, 
tổng các số trên mỗi hàng, cột, đường chéo chính, đường chéo phụ đều bằng nhau.
	Ví dụ
N = 3

8 1 6 
3 5 7
4 9 2

N = 5

17 24  1  8 15
23  5  7 14 16 
 4  6 13 20 22
10 12 19 21  3
11 18 25  2  9


Gợi ý: thuật toán đơn giản như sau, lần lượt xếp các số theo thứ tự tăng dần từ 1 đến N*N vào bảng vuông. 
Bắt đầu bằng số 1 tại ô nằm chính giữa hàng trên cùng, với mỗi số vừa được xếp, xếp số tiếp theo vào ô kề phía 
trên bên phải ô vừa xếp (hướng đông bắc), nếu ô đó đã bị điền rồi thì điền vào ô kề dưới (hướng nam). 
Xem chi tiết tại https://en.wikipedia.org/wiki/Siamese_method.
Để cho chỉ số mảng chạy vòng quanh mảng khi tăng dần hoặc giảm dần, nên dùng phép đồng dư. 
Chẳng hạn, thay vì i=i+1, dùng i = (i+1) % N, i sẽ chạy đến cuối mảng rồi vòng về đầu mảng theo kiểu 
...N-2, N-1, 0, 1, …
*/
#include <iostream>
#include <vector>
using namespace std;


void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
}

void generateMagicSquare(int n) {
    vector<vector<int>> magicSquare(n, vector<int>(n, 0));

    int num = 1;
    int i = 0, j = n / 2;

    while (num <= n * n) {
        if (i < 0 && j >= n) { 
            i += 2;
            j--;
        }
        if (i < 0) { 
            i = n - 1;
        }
        if (j == n) { 
            j = 0;
        }
        if (magicSquare[i][j] != 0) { 
            i += 2;
            j--;
            continue;
        } else {
            magicSquare[i][j] = num++; 
        }
        i--;
        j++;
    }

    printMatrix(magicSquare);
}

int main() {
    int N;
    cin >> N;

    if (N % 2 == 0) {
        return 1;
    }

    generateMagicSquare(N);

    return 0;
}