#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string operation;
    double x, y;
//we use x as a 1st no. or y as a second no.
    cout << "Enter x: "; 
    cin >> x;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter y: ";
    cin >> y; 

    if (operation == "+") {
        cout << "Result: " << x + y << endl;
    } else if (operation == "-") {
        cout << "Result: " << x - y << endl;
    } else if (operation == "*") {
        cout << "Result: " << x * y << endl;
    } else if (operation == "/") {
        if (y != 0) {
            cout << "Result: " << x / y << endl;
        } else {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
    } 
    else {
        cout << "Error: Invalid operation!" << endl;
    }

    return 0;
}
