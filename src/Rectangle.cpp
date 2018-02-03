#include "Rectangle.h"

#include <iostream>
#include <string>

using namespace std;

/**
 *   \brief Constructor for Rectangle.
 */
template <class T>  Rectangle<T>::Rectangle( ): TwoDShape<T>( "Rectangle", 2 )
{
    //Calls inputting method.
    while (!this->setSides( )){};
    T* sidesPtr = this->getSides();

    //sets temp side variables
    T x = sidesPtr[0];
    T y = sidesPtr[1];

    //Set the side length independent of sides array.
    setSideX(x);
    setSideY(y);
}

/**
 *   \brief Accessor for Rectangle's side X.
 *   \return T -The dimension of the rectangle's horizontal sides.
 */
template <class T> T Rectangle<T>::Rectangle::getSideX() const
{
    return sideX;
}

/**
 *   \brief Accessor for Rectangle's side Y.
 *   \return T -The dimension of the rectangle's vertical sides.
*/
template <class T> T Rectangle<T>::getSideY() const
{
    return sideY;
}

/**
 *  \brief Modifier for Rectangle's side X.
 *  \param dimension -The dimension of the rectangle's horizontal sides.
*/
template <class T> void Rectangle<T>::setSideX( T dimension )
{
    sideX = dimension;
}

/**
 *   \brief Modifier for Rectangle's side Y.
 *   \param T dimension -The dimension of the rectangle's vertical sides.
 */
template <class T> void Rectangle<T>::setSideY( T dimension )
{
    sideY = dimension;
}

/**
 *    \brief Accessor for Rectangle's Area.
 *    \return T -The area of the rectangle.
 */
template <class T> double Rectangle<T>::getArea() const
{
    return getSideX() * getSideY();
}
/**
 *    \brief Accessor for Rectangle's perimeter.
 *    \return T -The perimeter of the rectangle.
 */
template <class T>  double Rectangle<T>::getPerimeter() const
{
    return (2 * getSideX()) + ( 2 * getSideY());
}

/**
 *   \brief Method for displaying a Rectangle object.
 */
template <class T> void Rectangle<T>::display() const
{
    TwoDShape<T>::display();
    cout << "sideX: " << getSideX() << endl;
    cout << "sideY: " << getSideY() << endl;
    cout << "Area: " << getArea() << endl;
    cout << "perimeter: " << getPerimeter() << endl;
}
