#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the diamond (half): ";
    cin >> n;

    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *
    
    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; // Print leading spaces
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) // Print stars only at the edges
                cout << "*";
            else
                cout << " "; // Print space for hollow effect
        }
        cout << endl; // Move to the next line
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; // Print leading spaces
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) // Print stars only at the edges
                cout << "*";
            else
                cout << " "; // Print space for hollow effect
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
