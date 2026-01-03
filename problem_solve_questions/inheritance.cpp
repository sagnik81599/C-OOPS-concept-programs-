// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
public:
    Person(string fn, string ln) {
        firstName = fn;
        lastName = ln;
    }

    void printPerson() {
        cout << "Name :- " << firstName << " " << lastName << endl;
    }
};

class Student : public Person {
private:
    int id;
    int *testScores;
    int numScores;
public:
    Student(string fn, string ln, int idNum, int scores[], int n)
        : Person(fn, ln) {
        id = idNum;
        numScores = n;
        testScores = new int[n];
        for (int i = 0; i < n; i++) {
            testScores[i] = scores[i];
        }
    }

    char calculate() {
        int sum = 0;
        for (int i = 0; i < numScores; i++)
            sum += testScores[i];
        int avg = sum / numScores;

        if (avg >= 90 && avg <= 100)
            return 'O';
        else if (avg >= 80 && avg < 90)
            return 'E';
        else if (avg >= 70 && avg < 80)
            return 'A';
        else if (avg >= 60 && avg < 70)
            return 'B';
        else if (avg >= 50 && avg < 60)
            return 'C';
        else if (avg >= 40 && avg < 50)
            return 'D';
        else
            return 'T';
    }
};

int main() {
    string firstName, lastName;
    int id, numScores;
    cin >> firstName >> lastName >> id >> numScores;

    int testScores[10]; // Assuming maximum number of scores is 10
    for (int i = 0; i < numScores; i++) {
        cin >> testScores[i];
    }

    Student s(firstName, lastName, id, testScores, numScores);
    s.printPerson();
    cout << "ID: " << id << endl;
    cout << "Grade: " << s.calculate() << endl;

    return 0;
}
