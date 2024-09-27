#include <iostream>
using namespace std;

int main() {
    string str;
    int vowelCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

   
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]); 

        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++; 
                break;
            default:
             
                break;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}
