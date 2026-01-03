#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n <= 0) {
        cout << "Size should be positive";
        return 0;
    }

    int *arr = new int[n];        // Original array dynamic memory
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *rev = new int[n];        // Reversed array dynamic memory

    // Reverse logic
    for(int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }

    cout << "Original array ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;

    cout << "Reversed Array ";
    for(int i = 0; i < n; i++) {
        cout << rev[i];
    }

    delete [] arr;  
    delete [] rev;

    return 0;
}
