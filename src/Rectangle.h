#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

/**
 *  \brief A class for creating Rectangle objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */
template <class T> class Rectangle : public TwoDShape<T> {
    public:
        Rectangle( );                                         //Constructor.

        void setSideX( T );                                   //Modifier for Rectangle's side X.
        void setSideY( T );                                   //Modifier for Rectangle's side Y.

        T getSideX() const;                                   //Accessor for Rectangle's side X.
        T getSideY() const;                                   //Accessor for Rectangle's side Y.

        virtual double getArea() const override ;             //Accessor for Rectangle's Area.
        virtual double getPerimeter() const override ;        //Accessor for Rectangle's perimeter.
        virtual void display() const override;                //Method for display to be implemented.
    private:
        T sideX;                                              //Side A of Rectangle.
        T sideY;                                              //Side B of Rectangle.
};

#endif // RECTANGLE_H_INCLUDED
