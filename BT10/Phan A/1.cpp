#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* str1, const char* str2) {
    int length = strlen(str1) + strlen(str2);
    char* res = new char[length + 1];
    strcpy(res, str1);
    strcat(res, str2);
    return res;
 }

int main() {
    cout << concat("Hello", "World");
}