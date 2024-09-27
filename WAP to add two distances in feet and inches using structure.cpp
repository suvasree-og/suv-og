#include <iostream>
using namespace std;

struct Distance {
    int feet;
    int inches;
};


Distance addDistances(Distance d1, Distance d2) {
    Distance result;

    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;

    if (result.inches >= 12) {
        result.feet += result.inches / 12;  
        result.inches = result.inches % 12;
    }

    return result;
}

int main() {
    Distance d1, d2, result;

    cout << "Enter first distance (feet inches): ";
    cin >> d1.feet >> d1.inches;

    cout << "Enter second distance (feet inches): ";
    cin >> d2.feet >> d2.inches;

    result = addDistances(d1, d2);

    cout << "Total Distance = " << result.feet << " feet " << result.inches << " inches" << endl;

    return 0;
}
