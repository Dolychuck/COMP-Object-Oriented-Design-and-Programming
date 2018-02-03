//Shape.cpp
//Implementation of Shape.h

#include "Shape.h"

#include <iostream>
#include <string>

using namespace std;

/**
 *   \brief Constructor for Shape.
 */
template <class T>  Shape<T> ::Shape( string name, int numDistinctSides )
{
    setName(name);
    this->numDistinctSides = numDistinctSides;
    sides = new T[getNumDistinctSides()];
}

/**
 *   \brief Destructor for Shape.
 */
template <class T> Shape<T>::~Shape()
{
    for (int i = 0; i < getNumDistinctSides(); i++)
    {
        delete &sides[i];
    }
}

/**
 *   \brief Modifier for name.
 *   \param name -The name of the shape.
 *   \return bool
 */
template <class T> bool Shape<T>::setName( string name )
{
    this->name = name;
}

/**
 *   \brief Modifier for shape's dimensions.
 *   \return bool
 */
template <class T> bool Shape<T>::setSides()
{
    T dim;
    cout << "Enter side dimension(s) to build a: " << getName() << endl;

    for(int i = 0; i < getNumDistinctSides(); i++) {
        cin >> dim;
        if ( dim <= 0 ) {
            cout << "Invalid dimension" << endl;
            return false;
        }
        sides[i] = dim;
    }
    return true;
}

/**
 *   \brief Accessor for number of distinct sides of a shape.
 *   \return int
 */
template <class T> int Shape<T>::getNumDistinctSides() const
{
    return numDistinctSides;
}

/**
 *   \brief Accessor for the name of a shape.
 *   \return string
 */
template <class T> string Shape<T>::getName() const
{
    return name;
}

/**
 *   \brief Accessor for the shapes list of side dimensions.
 *   \return T*
 */
template <class T> T* Shape<T>::getSides() const
{
    return sides;
}

