// Preethi runs a small shop and wants to calculate the total cos of items based on their quantity.
// Write a program that helps Preethi by implementing a class Item with inline methods to set item details (number and cost) and to calculate the total cost. 
// The program should read item details and quantity from the user, and then display the total cost. 

// Note: This is a sample question asked in a Capgemini interview. 

// Input format: 507175 The first line of input consists of an integer representing the item number.
//  The second line of input consists of a floating-point number representing the cost of the item. 
//  The last line consists of an integer representing the quantity of the item purchased. Output format: 
//  A single-line output displaying the total cost of the item as a float value, rounded to two decimal places. 
//  Refer to the sample output for formatting specifications.



#include <iostream>
#include <iomanip>  // for fixed and setprecision
using namespace std;

class Item {
private:
    int itemNumber;
    float cost;

public:
    // Inline method to set item details
    inline void setItemDetails(int num, float c) {
        itemNumber = num;
        cost = c;
    }

    // Inline method to calculate total cost
    inline float calculateTotal(int quantity) {
        return cost * quantity;
    }
};

int main() {
    int number, quantity;
    float cost;

    // Input
    cin >> number;
    cin >> cost;
    cin >> quantity;

    // Create object
    Item it;
    it.setItemDetails(number, cost);

    float total = it.calculateTotal(quantity);

    // Output with 2 decimal places
    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
