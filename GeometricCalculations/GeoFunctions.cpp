#include "GeoFunctions.h"

double calculateArea(const double radius) { // area of circle definition
    const double pi = 3.14159;
    return pi * radius * radius;
}
double calculateArea(const double length, const double width) { // area of rectangle definition
    return length * width;
}
double calculatePerimeter(const double radius) { // perimeter of circle definition
    const double pi = 3.14159;
    return 2 * pi * radius;
}
double calculatePerimeter(const double length, const double width) { // perimeter of rectangle definition
    return 2 * (length + width);
}