#include <iostream>
#include <cstring>
using namespace std;

struct ArrayStruct {
    int arr[5];
};

struct AnotherStruct {
    int data;
};

struct MyStruct {
    ArrayStruct arrayData;
    AnotherStruct Data;
};

int main() {
    MyStruct originalStruct;

    for (int i = 0; i < 5; ++i) {
        originalStruct.arrayData.arr[i] = i * 2;
    }

    originalStruct.Data.data = 42;

    MyStruct copiedStruct = originalStruct;

    cout << "Original Struct:" << endl;
    cout << "Array Data: ";
    for (int i = 0; i < 5; ++i) {
        cout << originalStruct.arrayData.arr[i] << " ";
    }
    cout << endl;
    cout << " Data: " << originalStruct.Data.data << endl;

    cout << "\nCopied Struct:" << endl;
    cout << "Array Data: ";
    for (int i = 0; i < 5; ++i) {
        cout << copiedStruct.arrayData.arr[i] << " ";
    }
    cout << endl;
    cout << " Data: " << copiedStruct.Data.data << endl;

    return 0;
}
