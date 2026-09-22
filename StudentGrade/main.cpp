//Name: Miguel Angel Prado, Date: 9/21/2026, Purpose: take grades from input and calculate the average and letter grade, Assignment: Lab Activities: User Defined Functions: Challenge 2
#include <iostream>
#include "GradeFunctions.h"

using namespace std;
double g1, g2, g3;
void DisplayMenu() {
    int choice = 0;
    do {
        cout << "Select an option:" << endl;
        cout << "1. Input Grades" << endl;
        cout << "2. Calculate and Display Average" << endl;
        cout << "3. Assign and Display Letter Grade" << endl;
        cout << "4. Quit" << endl;

        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Input Grades Selected" << endl;
                inputGrades(g1, g2, g3);
                break;
            case 2:
                cout << "Calculate and Display Average Selected" << endl;
                cout << "Average: " << calculateAverage(g1, g2, g3) << endl;
                break;
            case 3:
                double average;
                cout << "Assign and Display Letter Grade Selected" << endl;
                cout << "Enter Average:" << endl;
                cin >> average;
                while (average < 0 || average > 100) {
                    cout << "Invalid Average entered, must be between 0 and 100, try again." << endl << "Enter Average:" << endl;
                    cin >> average;
                }
                cout << "Letter Grade for an Average of " << average << " is: " << getLetterGrade(average) << endl;
                break;
            case 4: {
                cout << "Quit" << endl;
                break;
            }
            default: {
                cout << "Invalid choice" << endl;
                cin.clear();
                cin.ignore();
                break;
            }
        }
    }while (choice != 4);
}



int main() {
    DisplayMenu();
    return 0;
}