#include <bits/stdc++.h>
using namespace std;

void printArray(const char arr[2][12]) {
    cout << "Mảng: " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)(arr[i][j]) << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int main() {

    char daytabA1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };  
    printArray(daytabA1);

    char daytabA2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    }; 
    printArray(daytabA2);

    char daytabB[2][12] = {
        {31,28,31},
        {31,29,31}
    };
    printArray(daytabB);

    char daytabC1[][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    printArray(daytabC1);

    char daytabC2[][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };
    printArray(daytabC2);

    //char daytabC2[2][] = {
        //31,28,31,30,31,30,31,31,30,31,30,31,
        //31,29,31,30,31,30,31,31,30,31,30,31
    //};
    //printArray(daytabC2);

    //char daytabC3[][] = {
        //31,28,31,30,31,30,31,31,30,31,30,31,
        //31,29,31,30,31,30,31,31,30,31,30,31
    //};
    //printArray(daytabC3);
}