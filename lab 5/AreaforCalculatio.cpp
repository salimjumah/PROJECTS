#include <iostream>
using namespace std;

double areaTriangle(double b, double h) { return 0.5 * b * h; }
double areaRectangle(double l, double w) { return l * w; }
double areaSquare(double s) { return s * s; }

int main() {
    int choice;

    do {
        cout << "Choose a shape (1) Triangle, (2) Rectangle, (3) Square, or (4) Quit: " << endl;
        cin >> choice;
        
        if (choice == 1) {
            double base, height;
            cout << "Enter base and height: " << endl;
            cin >> base >> height;
            cout << "Area of triangle: " << areaTriangle(base, height) << endl;
        } else if (choice == 2) {
            double length, width;
            cout << "Enter length and width: " << endl;
            cin >> length >> width;
            cout << "Area of rectangle: " << areaRectangle(length, width) << endl;
        } else if (choice == 3) {
            double side;
            cout << "Enter side: "<< endl;
            cin >> side;
            cout << "Area of square: " << areaSquare(side) << endl;
        } else if (choice != 4) {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
