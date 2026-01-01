// Sena wants to upskill in C++ by learning about member function.
//  Help him solve the following question crate a bankAtm class name represent an atm machine having attributes ATm I’d , location, and available cash .
//   Implement member function to withdraw cash deposit cash and display the current available cash in the ATM. Input :- An integer value for the ATM ID.
//    A string for the location of the ATM. A floating-point value for the available cash in the ATM. 
//    A floating point value representing the amount to withdraw.
//  A floating-point value representing the amount to deposit.


#include <iostream>
#include <iomanip>
using namespace std;

class BankATM {
private:
    int atmId;
    string location;
    float availableCash;

public:
    // Constructor
    BankATM(int id, string loc, float cash) {
        atmId = id;
        location = loc;
        availableCash = cash;
    }

    void withdrawCash(float amount) {
        if (amount <= availableCash) {
            availableCash -= amount;
            cout << "Withdrawal successful. Available cash: "
                 << fixed << setprecision(1) << availableCash << endl;
        } else {
            cout << "Insufficient cash in ATM" << endl;
        }
    }

    void depositCash(float amount) {
        availableCash += amount;
        cout << "Deposit successful. Available cash: "
             << fixed << setprecision(1) << availableCash << endl;
    }

    void displayCash() {
        cout << "Available cash in ATM: "
             << fixed << setprecision(1) << availableCash << endl;
    }
};

int main() {
    int id;
    string location;
    float initialCash, withdrawAmt, depositAmt;

    cin >> id;
    cin.ignore();
    getline(cin, location);
    cin >> initialCash >> withdrawAmt >> depositAmt;

    BankATM atm(id, location, initialCash);

    atm.withdrawCash(withdrawAmt);
    atm.depositCash(depositAmt);
    atm.displayCash();

    return 0;
}
