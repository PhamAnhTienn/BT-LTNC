/*Phần B. Thu nhập của người lao động sẽ bị áp thuế. Mức tính thuế như sau:
Thu nhập mỗi tháng		Mức thuế phải chịu
	1.000.000đ đầu tiên			0%
	500.000đ tiếp theo			10%
	500.000đ tiếp theo			15%
	Tiếp theo				20%
Tuy nhiên người lao động còn phải đóng 03 loại bảo hiểm: xã hội, y tế, nghề nghiệp với mức bảo hiểm là 9% trên 
tổng thu nhập hàng tháng. Toàn bộ tiền đóng bảo hiểm được miễn trừ thuế.
Ví dụ thu nhập là 3.000.000đ/tháng thì thuế phải đóng là:
Bảo_Hiểm(9%) = 3.000.000*9% = 270.000đ
TN_chịu_thuế = Tổng_TN – Bảo_Hiểm(9%) = 3.000.000 – 270.000 = 2.730.000đ
Thuế = 1.000.000*0%+500.000*10% + 500.000*15% + 730.000*20% = 271.000đ
TN_sau_thuế = Tổng_TN – Bảo_Hiểm – Thuế = 2.459.000đ
Viết chương trình để tính thuế người lao động phải trả và số tiền họ nhận được sau thuế mỗi tháng.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Tax {
private:
    double salary, taxLevel1, taxLevel2, taxLevel3;
    double BHXH;
    double newSalary;
public:
    Tax(double salary) {
        BHXH = salary * 0.09;
        this -> salary = salary - BHXH;
        taxLevel1= 500000 * 0.1;
        taxLevel2 = 500000 * 0.15;
        taxLevel3 = (this -> salary - 2000000) * 0.2;
    }

    void calNewSalary() {
        if(salary <= 1000000) {
            newSalary = salary; 
        } else {
            if(salary <= 1500000) {
                newSalary = salary - taxLevel1; 
            } else {
                if(salary <= 2000000) {
                    newSalary = salary - taxLevel1 - taxLevel2; 
                } else {
                    newSalary = salary - taxLevel1 - taxLevel2 - taxLevel3; 
                }
            }
        }
        cout << fixed << setprecision(0) << newSalary << endl;
    }
};

int main() {
    double salary;
    cin >> salary;
    Tax person1 = Tax(salary);
    person1.calNewSalary();
}