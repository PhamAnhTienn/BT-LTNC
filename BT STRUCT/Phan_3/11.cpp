#include <iostream>
#include <cstring>
using namespace std;

struct String {
    int n;
    char *str;

    String(const char *s) {
        int n = strlen(s);
        str = new char[n+1];
        strcpy(str, s);
    }

    ~String() {
        delete[] str;
    }

    void print() {
        cout << str << endl;
    }

    void append(const char* s) {
        int len = strlen(s);
        n += len;
        char* temp = new char[n + 1];

        strcpy(temp, str);
        strcat(temp, s);

        delete[] str;
        str = temp;
    }
};

int main() {
    String greeting("Hi");

    greeting.print();
    greeting.append(" there");

    greeting.print();
    delete &greeting;
    return 0;
}