#include <bits/stdc++.h>
using namespace std;

void printCharArray(const char *str) {
    cout << "Dạng mảng: ";
    for (int i = 0; str[i] != '\0'; ++i) {
        cout << str[i];
    }
    cout << endl;

    cout << "Xâu kí tự: " << str << endl;
    cout << endl;
}

char outsideA[10];

//char b[3] = “abcd”;
//char b[4] = "abcd";
char outsideB[5] = "abcd";

int main() {

    char a[10];
    printCharArray(a);
    printCharArray(outsideA);

    //char b[3] = “abcd”;
    //char b[4] = "abcd";
    char b[5] = "abcd";
    printCharArray(b);
    printCharArray(outsideB);

    char c[] = "abcd";
    int sizeC = sizeof(c);
    cout << "Kích thước thực của mảng str5: " << sizeC << endl; // = 5 do có \0
    printCharArray(c);
}