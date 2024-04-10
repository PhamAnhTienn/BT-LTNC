#include <iostream>

using namespace std;

bool binarySearch(int* arr, int size, int target) {
    int l = 0;
    int r = size - 1;
    while (l <= r) {
        int mid = (l+r)/2;

        if (arr[mid] = target) return true;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    if (binarySearch(arr, size, target)) cout << "Đã tìm thấy";
    else cout << " không tìm thấy ";

    return 0;
}