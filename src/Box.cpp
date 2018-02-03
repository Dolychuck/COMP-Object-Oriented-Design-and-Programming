#include "Box.h"

#include <iostream>
#include <string>

using namespace std;

/**
 *   \brief Constructor for Rectangle.
 */
template <class T>  Box<T>::Box( ): ThreeDShape<T>( "Box", 3 )
{
    //Calls inputting method.
    while (!this->setSides( )){};
    T* sidesPtr = this->getSides();

    //sets temp side variables
    T x = sidesPtr[0];
    T y = sidesPtr[1];
    T z = sidesPtr[2];

    //Set the side length independent of sides array.
    setSideX(x);
    setSideY(y);
    setSideZ(z);
}

/**
 *   \brief Accessor for Box's side X.
 *   \return T -The dimension of the Box's horizontal sides.
 */
template <class T> T Box<T>::getSideX() const
{
    return sideX;
}

/**
 *   \brief Accessor for Box's side Y.
 *   \return T -The dimension of the Box's vertical sides.
*/
template <class T> T Box<T>::getSideY() const
{
    return sideY;
}

/**
 *   \brief Accessor for Box's side Z.
 *   \return T -The dimension of the Box's 3d sides.
*/
template <class T> T Box<T>::getSideZ() const
{
    return sideZ;
}

/**
 *  \brief Modifier for Box's side X.
 *  \param dimension -The dimension of the Box's horizontal sides.
*/
template <class T> void Box<T>::setSideX( T dimension )
{
    sideX = dimension;
}

/**
 *   \brief Modifier for Box's side Y.
 *   \param T dimension -The dimension of the Box's vertical sides.
 */
template <class T> void Box<T>::setSideY( T dimension )
{
    sideY = dimension;
}

/**
 *   \brief Modifier for Box's side Z.
 *   \param T dimension -The dimension of the Box's 3d sides.
 */
template <class T> void Box<T>::setSideZ( T dimension )
{
    sideZ = dimension;
}

/**
 *    \brief Accessor for Box's Surface Area.
 *    \return T -The area of the Box.
 */
template <class T> double Box<T>::getArea() const
{
    int x = getSideX();
    int y = getSideY();
    int z = getSideZ();
    return  (2 * (x * y)) + (2 * (y * z)) + (2 * (x * z));
}
/**
 *    \brief Accessor for Box's perimeter.
 *    \return T -The perimeter of the Box.
 */
template <class T>  double Box<T>::getVolume() const
{
    return getSideX() * getSideY() * getSideZ();
}

/**
 *   \brief Method for displaying a Box object.
 */
template <class T> void Box<T>::display() const
{
    ThreeDShape<T>::display();
    cout << "sideX: " << getSideX() << endl;
    cout << "sideY: " << getSideY() << endl;
    cout << "sideZ: " << getSideZ() << endl;
    cout << "Surface Area: " << getArea() << endl;
    cout << "Volume: " << getVolume() << endl;
}
