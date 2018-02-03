#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include "TwoDShape.h"
#include "Shape.h"
/**
 *  \brief A class for creating Square objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */

template <class T> class Square : public TwoDShape<T> {
    public:
        Square( );                                            //Constructor.

        void setSide( T );                                    //Modifier for Square's sides.

        T getSide() const;                                    //Accessor for Square's sides.

        virtual double getArea() const override ;             //Accessor for Square's Area.
        virtual double getPerimeter() const override ;        //Accessor for Square's perimeter.
        virtual void display() const override;                //Method for display to be implemented.
    private:
        T side;                                               //Side of Square
};


#endif // SQUARE_H_INCLUDED


