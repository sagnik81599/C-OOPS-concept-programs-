#include<iostream>
using namespace std;

class Shape {
public:
    virtual void getarea() = 0; 
};

class Square : public Shape {
public:
    int h, w;

    void getarea() override {
        cout << "Square Area = " << (h * w) << endl;
    }
};

class Circle : public Shape {
public:
    float r;

    void getarea() override {
        cout << "Circle Area = " << (3.14 * r * r) << endl;
    }
};

int main() {

    Square sq;
    Circle cr;

    cout << "Enter height and width of square: ";
    cin >> sq.h >> sq.w;

    cout << "Enter radius of circle: ";
    cin >> cr.r;

    Shape* s;

    s = &sq;
    s->getarea();     

    s = &cr;
    s->getarea();      

    return 0;
}


