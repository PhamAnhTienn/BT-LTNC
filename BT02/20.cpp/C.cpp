/*Phần C. Người lao động có nhu cầu vay tiêu dùng trong vòng 1 năm. Lãi xuất vay là 2%/tháng được tính trên tổng dư nợ và 
cộng dồn vào cuối mỗi tháng.
Ví dụ, với khoản vay 1.000.000đ, sau một năm phải trả 1.268.243đ.
Chú ý: số tiền được làm tròn đến đơn vị đồng sau mỗi tháng.
Tháng	Tổng dư nợ đầu tháng	Lãi suất vay	Tổng dư nợ cuối tháng
	1		1.000.000		20.000			1.020.000
	2		1.020.000		20.400			1.040.400
	3		1.040.400		20.808			1.061.208
	4		1.061.208		21.224			1.082.432
	5		1.082.432		21.649			1.104.081
	6		1.104.081		22.082			1.126.163
	7		1.126.163		22.523			1.148.686
	8		1.148.686		22.974			1.171.660
	9		1.171.660		23.433			1.195.093
	10		1.195.093		23.902			1.218.995
	11		1.218.995		24.380			1.243.375
	12		1.243.375		24.868			1.268.243
Viết chương trình để tính tổng dư nợ của một khoản vay ngân hàng trong vòng 01 năm. 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Mortgage {
private:
    double money, newMoney;
    double interestRate;
    int month = 12;
public:
    Mortgage(double money) {
        this -> money = money;
        interestRate = 0.02;
        newMoney = money;
    }

    void calNewMoney() {
        while (month > 0) {
            double interest = newMoney * interestRate;
            newMoney += interest;
            month--;
        }
        newMoney = round(newMoney);
        cout << fixed << setprecision(0) << newMoney << endl;
    }
};

int main() {
    double money;
    cin >> money;
    Mortgage person1 = Mortgage(money);
    person1.calNewMoney();
}
