#include "GradeFunctions.h"

#include <iostream>
#include <ostream>
using namespace std;

void inputGrades(double& g1, double& g2, double& g3) {
    cout << "Enter Grade 1:" << endl;
    cin >> g1;
    while (g1 < 0 || g1 > 100) {
        cout << "Invalid grade entered, must be between 0 and 100, try again." << endl << "Enter Grade 1:" << endl;
        cin >> g1;
    }
    cout << "Enter Grade 2:" << endl;
    cin >> g2;
    while (g2 < 0 || g2 > 100) {
        cout << "Invalid grade entered, must be between 0 and 100, try again." << endl << "Enter Grade 2:" << endl;
        cin >> g2;
    }
    cout << "Enter Grade 3:" << endl;
    cin >> g3;
    while (g3 < 0 || g3 > 100) {
        cout << "Invalid grade entered, must be between 0 and 100, try again." << endl << "Enter Grade 3:" << endl;
        cin >> g3;
    }
    cout << "Grades entered:" << endl << "Grade 1: " << g1 << endl << "Grade 2: " << g2 << endl << "Grade 3: " << g3 << endl;
}
double calculateAverage(const double g1, const double g2, const double g3) {
    return (g1 + g2 + g3) / 3.0;
}
char getLetterGrade(const double average) {
    if (average < 60.0) {
        return 'F';
    }
    else if (average < 70.0) {
        return 'D';
    }
    else if (average < 80.0) {
        return 'C';
    }
    else if (average < 90.0) {
        return 'B';
    }
    else {
        return 'A';
    }
}