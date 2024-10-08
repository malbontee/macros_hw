#include <iostream>
#include "math_functions.h"
#define DEBUG
#define AREA(w, h) ((w) * (h))
#define PERIMETER(w,h) (2 * ((w) * (h)))

using namespace std;

int main()
{
    // 3
    int number;
    cout << "Please enter your number: ";
    cin >> number;
    cout << "Square of the entered number: " << SQUARE(number) << "\n";
    cout << "Cube of the entered number: " << CUBE(number) << "\n";

    // 2.1
    #ifdef DEBUG
        cout << "Debug mode is enabled.\n";
    #else
        cout << "Debug mode is off.\n";
    #endif

    // 2.2
    #ifdef __linux__
        cout << "Compilation for Linux!\n";
    #elif _WIN32 
        cout << "Compilation for Windows!\n";
    #else
        cout << "Compilation for...\nNOT DEFINED!";
    #endif
    
    // 1
    double width, height;
    cout << "Please enter the width of the rectangle: ";
    cin >> width;
    cout << "Please enter the height of the rectangle: ";
    cin >> height;
    cout << "Area: " << AREA(width, height) << "\n";
    cout << "Perimeter: " << PERIMETER(width, height);

}


