#include <iostream>
using namespace std;

int main() {
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100; // p2 trỏ đến vùng nhớ không tồn tại do đã xóa p
    cout << *p2; // lấy giá trị của vùng nhớ không tồn tại
    delete p2; // xóa địa chỉ không tôn tại 
}

