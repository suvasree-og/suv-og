#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    int n;
    cout << "Enter the number of employees in the department: ";
    cin >> n;

    Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> employees[i].id;
        cout << "Employee Name: ";
        cin >> employees[i].name;
        cout << "Employee Salary: ";
        cin >> employees[i].salary;
    }

    // Display employee details
    cout << "\nEmployee details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Employee ID: " << employees[i].id
             << ", Name: " << employees[i].name
             << ", Salary: " << employees[i].salary << endl;
    }

    return 0;
}
