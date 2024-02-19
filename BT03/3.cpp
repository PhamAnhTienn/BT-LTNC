/*Số đối gương. Cho các số A và B, đếm số các số nguyên N sao cho A <= N <= B và N là một số đối gương.
Ví dụ, các số đối gương: 121, 11, 11411
Các số không đối gương: 122, 10
Input:
Dữ liệu đọc từ input chuẩn (bàn phím). Dòng đầu chứa số tự nhiên T là số test case, N dòng tiếp theo, mỗi dòng chứa hai giá trị A và B trên cùng một dòng
Output:
Với mỗi test case, in giá trị cần thiết trên một dòng.
Ràng buộc: 1 <= T <= 100
0 <= A <= B <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;
bool palin(int n) {
	string s = to_string(n);
	int l = 0;
	int r = s.length() - 1;
	while(l < r) {
		if(s[l] != s[r]) return false;
		l++;
		r--;
	}
	return true;
}
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	for(int i = 1; i <= num; i++) {
		int A, B;
		cin >> A >> B;
		int res = 0;
		for(int i = A; i <= B; i++) {
			if(palin(i)) res++; 
		}
		cout << res << endl;
	}
	return 0;
}