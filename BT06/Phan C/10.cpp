#include <bits/stdc++.h>  
using namespace std;

vector<int> createArray(int N) {
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 50;
    }
    return arr;
}

void printTriplets(const vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size - 2; ++i) {
        for (int j = i + 1; j < size - 1; ++j) {
            for (int k = j + 1; k < size; ++k) {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")\n";
                }
            }
        }
    }
}

int main() {
    srand(time(0)); 
    int N = 10;
    vector<int> arr = createArray(N);
    cout << "Mảng các số nguyên: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << " Các bộ 3 số nguyên có tổng chia hết cho 25:";
    printTriplets(arr);
    return 0;
}