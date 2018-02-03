#include <iostream>

#include "Shape.cpp"
#include "Triangle.cpp"
#include "Rectangle.cpp"
#include "TwoDShape.h"
#include "Square.cpp"
#include "Cube.cpp"
#include "Box.cpp"

int main() {
    cout <<  "*****Shape Program*****\n" << endl;
    int c;

    while ( c != 0)
    {
        cout <<  "Select which Shape would you like to make: " << endl;
        cout <<  "   1) Triangle" << endl;
        cout <<  "   2) Rectangle" << endl;
        cout <<  "   3) Square" << endl;
        cout <<  "   4) Cube" << endl;
        cout <<  "   5) Box" << endl;
        cout <<  "   0) EXIT" << endl;

        cin >> c;

        Shape<float>  *shape;
        if ( c == 1)
        {
            shape = new Triangle<float>();
        }
        else if ( c == 2)
        {
             shape = new Rectangle<float>();
        }
        else if ( c == 3)
        {
             shape = new Square<float>();
        }
        else if ( c == 4)
        {
             shape = new Cube<float>();
        }
        else if ( c == 5)
        {
             shape = new Box<float>();
        }
        if (c != 0) {
            shape->display();
        }
        cout << endl;
    }
    cout << "Thank you!" << endl;
}
