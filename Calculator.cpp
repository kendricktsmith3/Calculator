// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) { return a / b;
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // or handle error as appropriate
    }
    return static_cast<double>(a) / b; 
}

int main() {
    int choice;
    double x, y;
	char again = 'y';

    while (again == 'y' || again == 'Y') {
        cout << "Select operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n"
         << "Enter choice: ";
        cin >> choice;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        switch (choice) {
        case 1:
            cout << "Result: " << add(x, y) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(x, y) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(x, y) << endl;
            break;
        case 4:
            if (y != 0)
                cout << "Result: " << divide(x, y) << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> again;
    }
	cout << "Exiting the calculator. Goodbye!" << endl;

	return 0;





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
