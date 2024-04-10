#include <iostream>

using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Số số chẵn trong đoạn 5 phần tử đầu: " << count_even(arr, 5) << endl;
    cout << "Số số chẵn trong đoạn 5 phần tử cuối: " << count_even(arr + 5, 5) << endl;

    return 0;
}