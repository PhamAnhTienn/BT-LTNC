/*Xâu đối xứng. Viết chương trình nhập từ bàn phím một xâu kí tự độ dài tối đa 100, sau đó kiểm tra xem xâu kí tự đó 
có đối xứng hay không. Chẳng hạn “abcba", “abba" là đối xứng, còn “abcda” không đối xứng. Nếu có thì in ra “Yes”, nếu 
không thì in ra “No”.
Gợi ý (bôi đen để xem): cho i chạy từ đầu xâu sang phải, đồng thời j chạy từ cuối xâu sang trái cho đến khi i và j 
gặp nhau hoặc khi s[i] != s[j]. Kết luận tuỳ theo tình trạng kết thúc.  
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool doixung = true;
    int n = s.length();
    if(n == 1) cout << "Yes";
    for(int i = 0; i < n/2; ++i) {
        if(s[i] != s[n-i-1]) doixung = false;
    }
    if(doixung) cout << "yes";
    else cout << "no";
}