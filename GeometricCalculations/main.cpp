// Name: Miguel Angel Prado, Date: 9/21/2026, Purpose: To perform geometric calculations via an interactive interface, Assignment: Lab Activities: User Defined Functions: Challenge 1.
#include <iostream>
#include "GeoFunctions.h"
using namespace std;

void DisplayMenu() {
    int choice = 0;
    do {
        cout << "Select an option:" << endl;
        cout << "1. Area of a Circle" << endl;
        cout << "2. Perimeter of a Circle" << endl; //options
        cout << "3. Area of a Rectangle" << endl;
        cout << "4. Perimeter of a Rectangle" << endl;
        cout << "5. Quit" << endl;

        cin >> choice; // takes user's choice

        switch (choice) {
            case 1: { //  area of a circle case
                double radius;
                cout << "Area of a Circle Selected" << endl;
                cout << "Enter radius:" << endl;
                cin >> radius;
                cout << "Area of Circle with " << radius << " radius: " << calculateArea(radius) << " units squared." << endl;
                break;
            }
            case 2: { // perimeter of circle case
                double radius;
                cout << "Perimeter of a Circle Selected" << endl;
                cout << "Enter radius:" << endl;
                cin >> radius;
                cout << "Perimeter of Circle with " << radius << " radius: " << calculatePerimeter(radius) << " units." << endl;
                break;
            }
            case 3: { // area of rectangle case
                double length, width;
                cout << "Area of a Rectangle Selected" << endl;
                cout << "Enter Length:" << endl;
                cin >> length;
                cout << "Enter Width:" << endl;
                cin >> width;
                cout << "Area of Rectangle with " << length << " Length and " << width << " Width: " << calculateArea(length, width) << " units squared." << endl;
                break;
            }
            case 4: { // perimeter of rectangle case
                double length, width;
                cout << "Perimeter of a Rectangle Selected" << endl;
                cout << "Enter Length:" << endl;
                cin >> length;
                cout << "Enter Width:" << endl;
                cin >> width;
                cout << "Perimeter of Rectangle with " << length << " Length and " << width << " Width: " << calculatePerimeter(length, width) << " units." << endl;
                break;
            }
            case 5: // end program case
                cout << "Quit" << endl;
                break;
            default: // default for invalid inputs
                cout << "Invalid choice" << endl;
                cin.clear();
                cin.ignore();
                break;
        }
    } while (choice != 5);
}

int main() {
    DisplayMenu(); //calls the menu which does all the work
    return 0;
}