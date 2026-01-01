#include <iostream>
using namespace std;

class Box {
private:
    int length;   // private attribute

public:
    // Function to input length
    void get() {
        cin >> length;
    }

    // Declare friend function
    friend int printVolume(Box b);
};

// Friend function definition
int printVolume(Box b) {
    return b.length * b.length * b.length; // volume of cube
}

int main() {
    Box b;
    b.get();   // take input for length
    cout << printVolume(b) << endl;  // print volume
    return 0;
}
