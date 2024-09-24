#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;

    //  *******
    //   *****
    //    ***
    //     *
    
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            cout << " "; // Print leading spaces
        }
        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }

    return 0;
}
