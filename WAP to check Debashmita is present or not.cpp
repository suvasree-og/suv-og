#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Rahul", "Debasmita", "Ankita", "Subham", "Priya"};
    int size = sizeof(names) / sizeof(names[0]);
    
    string searchName = "Debasmita";
    
    bool found = false;
    
  
    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) {
            found = true;
            break;
        }
    }
 
    if (found) {
        cout << searchName << " is present in the array." << endl;
    } else {
        cout << searchName << " is not present in the array." << endl;
    }

    return 0;
}
