/*Một người lao động được trả lương hàng tháng qua tài khoản ngân hàng vào đầu tháng cho khối lượng công việc họ hoàn thành 
vào tháng trước (ví dụ đầu tháng 2 nhận được lương của tháng 1). Hợp đồng làm tối thiểu mỗi tháng là 100 tiếng với mức lương 12.000đ/giờ. 
Nếu trong tháng người đó làm vượt thời gian 100 tiếng thì mức lương theo giờ được tính như sau: 
Thời gian làm quá 100 tiếng	Mức lương theo giờ (đồng/giờ)
	1-50 tiếng				16.000
	1-50 tiếng tiếp theo			20.000
	Từ những tiếng tiếp theo		25.000
Ví dụ người đó nhận được lương mỗi tháng như sau:
TN(210 tiếng) = 100*12.000 + 50*16.000 + 50*20.000 + 10*25.000 = 3.250.000đ
TN(167 tiếng) = 100*12.000 + 50*16.000 + 17*20.000 = 2.340.000đ
Viết chương trình nhận đầu vào là tổng số giờ làm việc một tháng, đầu ra là lương của tháng đó để giải quyết bài toán tính 
thu nhập của người lao động miêu tả như trên.*/
#include <iostream>
using namespace std;

class Expense {
private:
    int hour, initialLevel, firstLevel, secondLevel, thirdLevel;
    int salary;
public:
    Expense(int hour) {
        this -> hour = hour;
        initialLevel = 12000;
        firstLevel = 16000;
        secondLevel = 20000;
        thirdLevel = 25000;
    }

    void calSalary(int hour) {
        if(hour <= 100) {
            salary = 100 * initialLevel;
        } else {
            if(hour <= 150) {
                salary = 100 * initialLevel + (hour - 100) * firstLevel; 
            } else {
                if(hour <= 200) {
                    salary = 100 * initialLevel + 50 * firstLevel + (hour - 150) * secondLevel;
                } else {
                    salary = 100 * initialLevel + 50 * firstLevel + 50 * secondLevel + (hour - 200) * thirdLevel;
                }
            }
        }
        cout << salary << endl;
    }
};

int main() {
    int hour;
    cin >> hour;
    Expense TN = Expense(hour);
    TN.calSalary(hour);
}