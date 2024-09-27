#include <iostream>
using namespace std;

struct Student {
    string name;
    int section;
    int marks[5];
};

int main() {
    Student students[10];
    
    // Input details for 10 students
    for (int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Section (1 or 2): ";
        cin >> students[i].section;
        cout << "Enter marks for 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].marks[j];
        }
    }

    // Calculate and display average marks of each student
    for (int i = 0; i < 10; i++) {
        int totalMarks = 0;
        for (int j = 0; j < 5; j++) {
            totalMarks += students[i].marks[j];
        }
        double average = totalMarks / 5.0;
        cout << "Student: " << students[i].name << ", Section: " << students[i].section
             << ", Average Marks: " << average << endl;
    }

    return 0;
}
