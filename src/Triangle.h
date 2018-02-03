#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include "TwoDShape.h"
#include "Shape.h"

/**
 *  \brief A class for creating Triangle objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */
template <class T> class Triangle : public TwoDShape<T> {
    public:
        Triangle( );                                          //Constructor.

        void setSideA( T );                                   //Modifier for Triangle's side A.
        void setSideB( T );                                   //Modifier for Triangle's side B.
        void setSideC( T );                                   //Modifier for Triangle's side C.

        T getSideA() const;                                   //Accessor for Triangle's side A.
        T getSideB() const;                                   //Accessor for Triangle's side B.
        T getSideC() const;                                   //Accessor for Triangle's side C.

        virtual double getArea() const override ;             //Accessor for Triangle's Area.
        virtual double getPerimeter() const override ;        //Accessor for Triangle's perimeter.
        virtual void display() const override;                //Method for display to be implemented.
    private:
        T sideA;                                              //Side A of Triangle.
        T sideB;                                              //Side B of Triangle.
        T sideC;                                              //Side B of Triangle.
};

#endif // TRIANGLE_H_INCLUDED
