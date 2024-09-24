#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the triangle: ";
    cin >> n;

    // 1234
    // 123
    // 12
    // 1
    
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j; // Print numbers
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
