#include <iostream>
#include <cstring> 
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Sử dụng: " << argv[0] << " xâu1 xâu2" << endl;
        return 1;
    }

    const char *str1 = argv[1];
    const char *str2 = argv[2];

    int count = 0;
    const char *ptr = str2;
    while ((ptr = strstr(ptr, str1)) != NULL) {
        count++;
        ptr++;
    }

   
    cout << "Số lần xuất hiện của \"" << str1 << "\" trong \"" << str2 << "\": " << count << endl;

    return 0;
}