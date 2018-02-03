#include "Square.h"
#include <iostream>
#include <string>

using namespace std;

/**
 *   \brief Constructor for Square.
 */
template <class T>  Square<T>::Square( ): TwoDShape<T>( "Square", 1 )
{
    //Calls inputting method.
    while (!this->setSides( )){};
    T* sidesPtr = this->getSides();

    //sets temp side variables
    T side = sidesPtr[0];

    //Set the side length independent of sides array.
    setSide(side);
}

/**
 *   \brief Accessor for Square's side.
 *   \return T -The dimension of the Square's sides.
 */
template <class T> T Square<T>::getSide() const
{
    return side;
}

/**
 *  \brief Modifier for Square's sides.
 *  \param dimension -The dimension of the square's sides.
*/
template <class T> void Square<T>::setSide( T dimension )
{
    side = dimension;
}

/**
 *    \brief Accessor for Square's Area.
 *    \return T -The area of the square.
 */
template <class T> double Square<T>::getArea() const
{
    return getSide() * getSide();
}
/**
 *    \brief Accessor for square's perimeter.
 *    \return T -The perimeter of the square.
 */
template <class T>  double Square<T>::getPerimeter() const
{
    return (4 * getSide());
}

/**
*   \brief Method for displaying a square object.
 */
template <class T> void Square<T>::display() const
{
    TwoDShape<T>::display();
    cout << "sides: " << getSide() << endl;
    cout << "Area: " << getArea() << endl;
    cout << "perimeter: " << getPerimeter() << endl;
}
