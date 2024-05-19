#include <iostream>
using namespace std;

int* func(int val) {
    int local = val;  
    return &local;  
}

int main() {
    int* ptr = func(5); 
    delete ptr;  /* ptr đang trỏ đến một biến địa phương (local) được cấp phát trên stack trong hàm. 
                    Khi hàm kết thúc thì vùng nhớ của local sẽ không còn hợp lệ nữa. */
    return 0;
}
