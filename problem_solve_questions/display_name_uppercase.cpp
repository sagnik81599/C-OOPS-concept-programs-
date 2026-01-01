// Ragi wants to create a program to store and display personal information about individuals.
// He decided to create a class called person to represent a person details with a name, age and gender as their private attribute.
// Initialize and gender should be displayed in uppercase letters. 

// Input details The input consists of 
// the name strings, age as an integer and gender as a 
// string of a person in separate lines



#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Person {
private:
    string name;
    int age;
    string gender;

public:
    void input() {
    cout << "Enter your full name: ";
    getline(cin, name);  // Reads the whole line (with spaces)
    cout<<"Enter your age"<<endl;
    cin >> age;
    cout<<"Enter the gender"<<endl;
    cin >> gender;

        
    }

    void display() {
        // Convert name to uppercase
        for (int i = 0; i < name.size(); i++) {
            name[i] = toupper(name[i]);
        }

        // Convert gender to uppercase
        for (int i = 0; i < gender.size(); i++) {
            gender[i] = toupper(gender[i]);
        }

        cout << name << " " << age << " " << gender << endl;
    }
};

int main() {
    Person p;
    p.input();
    p.display();
    return 0;
}
