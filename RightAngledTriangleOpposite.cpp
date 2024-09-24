#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the triangle: ";
    cin >> n;

    //      *
    //     **
    //    ***
    //   ****
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << " "; // Print leading spaces
        }
        for(int j = 1; j <= i; j++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }

    return 0;
}