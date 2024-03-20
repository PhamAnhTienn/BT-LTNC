#include <bits/stdc++.h>
using namespace std;

int outsideA[5];

int outsideB[5] = {1, 2, 3, 4};
//int b[3] = {1, 2, 3, 4}; 

int outsideC[ ] = {1, 2, 3, 4};

int main() {
    int a[5];
    for (int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }

    for (int i = 0; i < 4; i++){
        cout << outsideA[i] << " ";
    }

    int b[5] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++){
        cout << b[i] << " ";
    }
    //int b[3] = {1, 2, 3, 4}; 

    int c[ ] = {1, 2, 3, 4};
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
        cout << c[i];
    }

    for (int i = 0; i < sizeof(outsideC) / sizeof(outsideC[0]); i++) {
        cout << outsideC[i];
    }
}