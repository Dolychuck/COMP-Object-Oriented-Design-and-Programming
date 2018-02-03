#ifndef THREEDSHAPE_H_INCLUDED
#define THREEDSHAPE_H_INCLUDED

#include "Shape.h"

/**
 *  \brief An abstract class for ThreeDShape objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */
template <class T> class ThreeDShape : public Shape<T> {
    public:
        ThreeDShape( std::string name, int numSides ): Shape <T> ( name , numSides ){};     //Constructor
        virtual double getArea() const = 0;                                                 //Pure virtual Accessor for ThreeDShape's Sufface Area.
        virtual double getVolume() const = 0;                                               //Pure virtual Accessor for ThreeDshape's Volume.
        virtual void display() const { cout << Shape<T>::getName() << endl;  };             //Method for display to be implemented.
};

#endif // THREEDSHAPE_H_INCLUDED
