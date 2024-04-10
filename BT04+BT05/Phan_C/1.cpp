/*Tìm lặp. Viết chương trình nhập một số nguyên dương N <= 10000 và một chuỗi gồm N số trong khoảng từ 1 đến N, 
xác định xem trong chuỗi đó hai số nào bằng nhau hay không. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.
Gợi ý (bôi đen để xem): ý tưởng là dùng một tập hợp ban đầu rỗng, duyệt từng số trong chuỗi, nếu số đó chưa có 
trong tập hợp thì bỏ nó vào trong tập hợp, nếu nó có rồi nghĩa là chuỗi có ít nhất hai số cùng giá trị → kết luận 
có trùng. Duyệt đến hết chuỗi rồi mà chưa kết luận trùng nghĩa là không có lặp. Làm thế nào để mô hình hoá một tập 
hợp các số từ 1 đến N? Dùng mảng bool, seen[i] = true nghĩa là đã gặp giá trị i rồi. 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> number;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        number[num]++;
    }

    for(auto &pair : number) {
        if(pair.second > 1) {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}