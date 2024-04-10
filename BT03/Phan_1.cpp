/*
1 .Hãy định nghĩa cấu trúc Point đại diện cho một điểm trong không gian 2 chiều 
(gồm hai trường x và y đại diện cho tọa độ x và tọa độ y trên mặt phẳng). 
struct Point {
    int x, y;
};

2. Viết một hàm print() nhận tham số là một biến kiểu Point và in ra tọa độ điểm đó dưới dạng (x, y). 
void print(Point p) {
    cout << p.x << “ “ << p.y;
}
Demo sử dụng hàm đó tại hàm main.
int main(....
{
   Point point;
   point.x = 10;
   point.y = 12;
   print(point);
}

2. Tham số hàm. Viết chương trình thử nghiệm truyền tham số kiểu Point vào hàm theo hai kiểu truyền tham trị 
và truyền tham biến. Hãy dùng hàm main() để thử nghiệm sự khác nhau giữa hiệu ứng truyền tham trị và tham biến 
là struct và tham trị tham biến là thành viên của struct.

3 .Giá trị trả về. Viết một hàm mid_point() nhận 02 tham số kiểu Point và trả về một cấu trúc Point là trung
điểm của đoạn thẳng nối hai điểm đó. Hãy sử dụng const để đảm bảo hàm mid_point không sửa giá trị của hai điểm 
được truyền vào. 

4. Bài tập tại Hackerrank (https://www.hackerrank.com/challenges/c-tutorial-struct/problem)
*/

#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void print(const Point& p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

void modify(Point& p) {
    p.x += 1;
    p.y += 1;
}

void modifyCopy(Point p) {
    p.x += 1;
    p.y += 1;
}

Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);

    modify(point);
    print(point); //pass by reference

    modifyCopy(point);
    print(point); // pass by value

    Point anotherPoint;
    anotherPoint.x = 20;
    anotherPoint.y = 24;

    Point mid = mid_point(point, anotherPoint);
    print(mid); 
    return 0;
}

/*bài hackerrank 
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
*/








