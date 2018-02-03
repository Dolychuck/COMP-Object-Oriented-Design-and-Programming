#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED
#include "ThreeDShape.h"
#include "Shape.h"
/**
 *  \brief A class for creating Cube objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */

template <class T> class Cube : public ThreeDShape<T> {
    public:
        Cube( );                                              //Constructor.

        void setSide( T );                                    //Modifier for Cube's sides.

        T getSide() const;                                    //Accessor for Cube's sides.

        virtual double getArea() const override ;             //Accessor for Cube's Area.
        virtual double getVolume() const override ;           //Accessor for Cube's perimeter.
        virtual void display() const override;                //Method for display to be implemented.
    private:
        T side;                                               //Side of Cube
};


#endif // SQUARE_H_INCLUDED


