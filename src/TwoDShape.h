#ifndef TWODSHAPE_H_INCLUDED
#define TWODSHAPE_H_INCLUDED

#include "Shape.h"

/**
 *  \brief An abstract class for TwoDShape objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */
template <class T> class TwoDShape : public Shape<T> {
    public:
        TwoDShape( std::string name, int numSides ): Shape <T> ( name , numSides ){};       //Constructor
        virtual double getArea() const = 0;                                                 //Pure virtual Accessor for TwoDShape's Area.
        virtual double getPerimeter() const = 0;                                            //Pure virtual Accessor for TwoDshape's perimeter.
        virtual void display() const { cout << Shape<T>::getName() << endl; };                        //Method for display to be implemented.
};

#endif // TWODSHAPE_H_INCLUDED
