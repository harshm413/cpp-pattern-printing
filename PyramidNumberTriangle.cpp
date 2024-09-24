#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;

    //    1
    //   121
    //  12321
    // 1234321
    
    for(int i = 1; i <= n; i++) {
        // Print leading spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print ascending numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print descending numbers
        for(int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
