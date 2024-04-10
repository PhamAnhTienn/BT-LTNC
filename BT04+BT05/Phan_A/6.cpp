#include <bits/stdc++.h>
using namespace std;

void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1; 
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 30;
    int arr[size];

    srand(time(NULL));
    generateRandomArray(arr, size);

    cout << "Mảng ban đầu:" << endl;
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "Mảng sau khi sắp xếp:" << endl;
    printArray(arr, size);

    return 0;
}
