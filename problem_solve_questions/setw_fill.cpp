// Mansi a cashier at a grocery store needs to format transaction I’d so they always appears as 9 digit numbers with leading zeros. 
// Write a program that helps selsi by taking an integer as input and displaying it with leading zeros to ensures that total width is 9 digits. 

// Input format :- the input consists of an integer n , representing the transaction ID.



#include <iostream>
#include <iomanip>  // for setw() and setfill()
using namespace std;

int main() {
    int n;
    cin >> n;  // input transaction ID

    // print with leading zeros, total width = 9
    cout << setw(9) << setfill('0') << n;

    return 0;
}
