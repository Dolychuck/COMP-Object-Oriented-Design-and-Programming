//Shape.h

#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <string>

/**
 *  \brief An class for Shape objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */
template <class T> class Shape {
    public:
        Shape( std::string, int numSides );             //Constructor, numsides will be implemented in concrete classes.
        ~Shape();                                       //Destructor
        bool setName( std::string );                    //Mutator for name.
        bool setSides( );                               //Mutator for side setting all side dimensions.

        std::string getName() const;                    //Accessor for Shape's name.
        T* getSides() const;                            //Accessor for Shape's list of sides.
        int getNumDistinctSides() const;                //Accessor for Shape's number of distinct of sides.

        virtual double getArea() const = 0;             //Pure virtual Accessor for Shape's Area.
        virtual void display() const = 0;               //Pure virtual method for display to be implemented.

    private:
        std::string name;                               //Member variable for name of shape.
        T *sides;                                       //Member variable for a list of side dimensions.
        int numDistinctSides;                           //Member variable for a number of sides.
};

#endif // SHAPE_H_INCLUDED
