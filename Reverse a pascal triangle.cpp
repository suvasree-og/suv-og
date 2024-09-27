#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generatePascalTriangle(int n) {
    vector<vector<int>> triangle(n);
    
    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    
    return triangle;
}

void printReversePascalTriangle(int n) {
    vector<vector<int>> triangle = generatePascalTriangle(n);
    
    for (int i = n - 1; i >= 0; i--) {
        
        for (int j = 0; j < (n - i - 1); j++) {
            cout << "  ";
        }
        
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << "   ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the Reverse Pascal's Triangle: ";
    cin >> n;
    
    printReversePascalTriangle(n);
    
    return 0;
}
