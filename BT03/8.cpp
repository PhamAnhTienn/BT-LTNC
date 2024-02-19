#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> thoiGianKham(N);
    for (int i = 0; i < N; ++i) {
        cin >> thoiGianKham[i];
    }

    sort(thoiGianKham.begin(), thoiGianKham.end());

    int tongThoiGianChoDoi = 0;
    for (int i = 1; i < N; ++i) {
        thoiGianKham[i] += thoiGianKham[i - 1];
        tongThoiGianChoDoi += thoiGianKham[i - 1];
    }

    cout << tongThoiGianChoDoi << endl;

    return 0;
}
