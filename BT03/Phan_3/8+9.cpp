#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void Value(Point p) {
    cout << "Address of parameter p pass by value: " << &p << endl;
}

void Reference(Point& p) {
    cout << "Address of parameter p pass by reference: " << &p << endl;
}

int main() {
    Point myPoint;

    cout << "Address of myPoint: " << &myPoint << endl;
    cout << "Address of x: " << &(myPoint.x) << endl; 
    // --> addresses of x and myPoint are similar 
    cout << "Address of y: " << &(myPoint.y) << endl;

    Value(myPoint);
    Reference(myPoint);

    return 0;
}

