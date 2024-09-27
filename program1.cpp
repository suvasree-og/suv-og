#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the reversed Pascal's triangle: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 0; j <= n - i; j++) {
            cout << " ";  // Print leading spaces
        }

        int value = 1;
        for (int k = 1; k <= i; k++) {
            cout << value << " ";  // Print Pascal's triangle values
            value = value * (i - k) / k;  // Update value for the next element
        }
        cout << endl;
    }

    return 0;
}
