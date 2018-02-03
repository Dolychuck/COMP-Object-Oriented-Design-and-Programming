#include "Cube.h"
#include <iostream>
#include <string>

using namespace std;

/**
 *   \brief Constructor for Cube.
 */
template <class T>  Cube<T>::Cube( ): ThreeDShape<T>( "Cube", 1 )
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
 *   \brief Accessor for Cube's side.
 *   \return T -The dimension of the Cube's sides.
 */
template <class T> T Cube<T>::getSide() const
{
    return side;
}

/**
 *  \brief Modifier for Cube's sides.
 *  \param dimension -The dimension of the Cube's sides.
*/
template <class T> void Cube<T>::setSide( T dimension )
{
    side = dimension;
}

/**
 *    \brief Accessor for Cube's Area.
 *    \return T -The area of the Cube.
 */
template <class T> double Cube<T>::getArea() const
{
    return 6 * (getSide() * getSide());
}
/**
 *    \brief Accessor for Cube's volume.
 *    \return T -The volume of the Cube.
 */
template <class T>  double Cube<T>::getVolume() const
{
    return ( getSide() * getSide() * getSide());
}

/**
*   \brief Method for displaying a Cube object.
 */
template <class T> void Cube<T>::display() const
{
    ThreeDShape<T>::display();
    cout << "sides: " << getSide() << endl;
    cout << "Surface Area: " << getArea() << endl;
    cout << "Volume: " << getVolume() << endl;
}
