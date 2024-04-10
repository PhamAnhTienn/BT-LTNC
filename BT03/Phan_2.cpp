/*
5. Rect. Viết một struct Rect là kiểu dữ liệu đại diện cho hình chữ nhật. Rect có bốn thành viên dữ liệu x, y là tọa độ 
góc trên trái, w và h là chiều rộng, chiều cao của hình. Rect có hàm contains() nhận 01 tham số kiểu Point và trả về giá
trị kiểu bool là true nếu point được cho nằm bên trong hình (tính cả viền), false nếu ngược lại. Hãy sử dụng const để đảm 
bảo hàm contains không sửa giá trị của điểm được truyền vào, và để các hàm này dùng được cho các hằng kiểu Rect.

6. Ship. Viết một struct Ship là kiểu dữ liệu đại diện cho một con tầu (ship). Mỗi ship có một biến thành viên là 
một Rect để ghi tọa độ và kích thước của tầu, một biến thành viên id kiểu string là số hiệu của tầu. Ngoài ra 
còn có thêm dx và dy là vận tốc hiện hành của tầu theo trục x và trục y. Viết hàm move() của Ship với nhiệm vụ thay 
đổi vị trí của tầu theo vận tốc hiện hành (x += dx, y+= dy). Viết hàm display(const Ship& ship) là hàm độc lập 
bên ngoài với nhiệm vụ hiển thị số hiệu và tọa độ của tầu.

7. Viết một chương trình nhỏ để thử nghiệm struct Ship, tạo ra một số con tầu với tọa độ và tốc độ khác nhau. 
Dùng vòng lặp cho các con tầu di chuyển và hiển thị tọa độ của tầu. Ví dụ
while (loop < 10) {
    ship1.move(); ship2.move();
    display(ship1); display(ship2);
}

*/

#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

struct Rect {
    int x, y, w, h;

    bool contains(const Point& p) {
        if(p.x < x || p.x > x + w ||
           p.y < y || p.y > y + h) {
            return false;
        } else return true;
    }
};

struct Ship {
    int dx, dy;
    Rect rect;
    string id;

    Ship(Rect rect, string id, int dx, int dy) {
        this-> dx = dx;
        this-> dy = dy;
        this-> rect = rect;
        this-> id = id;
    }

    void move() {
        rect.x += dx;
        rect.y+= dy;
    }
};

void print(const Point& p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << ", Position: ";
    print({ship.rect.x, ship.rect.y});
    cout << endl;
}

int main() {
    Rect rect1 = {0, 0, 10, 5};
    Rect rect2 = {5, 5, 2, 2};
    Point testPoint = {5, 2};
    cout << "Point is inside the rectangle: " << boolalpha << rect1.contains(testPoint) << endl;


    // Thử nghiệm phần 3
    Ship ship1 = Ship(rect1, "001", 1, 1);
    Ship ship2 = Ship{rect2, "002", -1, 0};

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }
    return 0;
}