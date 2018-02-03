//Implementation of Traingle.cpp

#include "Triangle.h"
#include <math.h>

#include <iostream>
#include <string>

using namespace std;

/**
 *   \brief Constructor for Triangle.
 */
template <class T>  Triangle<T>::Triangle( ): TwoDShape<T>( "Triangle", 3 )
{
    //Calls inputting method.
    while (!this->setSides( )){};
    T* sidesPtr = this->getSides();

    //sets temp side variables
    T a = sidesPtr[0];
    T b = sidesPtr[1];
    T c = sidesPtr[2];

    //Checks for proper triangle using the Triangle inequality theorem.
    while( true )
    {
        if (!((a+b) > c) )
        {
                cout << "The third side must be less than: " << a+b << " Enter again" << endl;
                cin >> c;
                sidesPtr[2] = c;
                break;
        }
        else if (!((b+c) > a))
        {
            cout << "The first side must be less than: " << c+b << " Enter again" << endl;
            cin >> a;
            sidesPtr[0] = a;
            break;
        }
        else if (!((a+c) > b))
        {
            cout << "The second side must be less than: " << a+c << " Enter again" << endl;
            cin >> b;
            sidesPtr[1] = b;
            break;
        }
        else
        {
            break;
        }
    }

    //Set the side length independent of sides array.
    setSideA(a);
    setSideB(b);
    setSideC(c);

}

/**
 *  \brief Accessor for Triangle's side A.
 *  \return T -SideA
*/
template <class T> T Triangle<T>::Triangle::getSideA() const
{
    return sideA;
}

/**
 *  \brief Accessor for Triangle's side B.
 *  \return T -SideB
*/
template <class T> T Triangle<T>::getSideB() const
{
    return sideB;
}

/**
 *  \brief Accessor for Triangle's side B.
 *  \return T -SideB
*/
template <class T> T Triangle<T>::getSideC() const
{
    return sideC;
}

/**
 *  \brief Modifier for Triangle's side A.
 *  \param T -SideA
*/
template <class T> void Triangle<T>::setSideA( T dimension )
{
    sideA = dimension;
}

/**
 *  \brief Modifier for Triangle's side B.
 *  \param T -SideB
*/
template <class T> void Triangle<T>::setSideB( T dimension )
{
    sideB = dimension;
}

/**
 *  \brief Modifier for Triangle's side C.
 *  \param T -SideC
*/
template <class T> void Triangle<T>::setSideC( T dimension )
{
    sideC = dimension;
}

/**
 *  \brief Accessor for Triangle's Area.
 *  \return double -Area
*/
template <class T> double Triangle<T>::getArea() const
{
    double p = getPerimeter()/2;
    T a = getSideA();
    T b = getSideB();
    T c = getSideC();
    return sqrt(p*((p-a)*(p-b)*(p-c)));
}

/**
 *  \brief Accessor for Triangle's perimeter.
 *  \return double -perimeter
*/
template <class T>  double Triangle<T>::getPerimeter() const
{
    return getSideA() + getSideB() + getSideC();
}

/**
 *  \brief Displays the Triangle's.
*/
template <class T> void Triangle<T>::display() const
{
    TwoDShape<T>::display();
    cout << "sideA: " << getSideA() << endl;
    cout << "sideB: " << getSideB() << endl;
    cout << "sideC: " << getSideC() << endl;
    cout << "Area: " << getArea() << endl;
    cout << "perimeter: " << getPerimeter() << endl;
}
