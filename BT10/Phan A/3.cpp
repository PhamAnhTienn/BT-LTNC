#include <iostream>
using namespace std;


int main() {
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    std::cerr <<"a: " << "-" << a << "-" << endl;
    std::cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // giải phóng bộ nhớ của con trỏ c chưa được cấp phát động
    std::cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
