#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

/**
 *  \brief A class for creating Box objects.
 *  \author Dustin Olychuck
 *  \version 22/01/2018
 */
template <class T> class Box : public ThreeDShape<T> {
    public:
        Box( );                                                //Constructor.

        void setSideX( T );                                   //Modifier for Box's side X.
        void setSideY( T );                                   //Modifier for Box's side Y.
        void setSideZ( T );                                   //Modifier for Box's side Z.


        T getSideX() const;                                   //Accessor for Box's side X.
        T getSideY() const;                                   //Accessor for Box's side Y.
        T getSideZ() const;                                   //Accessor for Box's side Z.

        virtual double getArea() const override ;             //Accessor for Box's Area.
        virtual double getVolume() const override ;           //Accessor for Box's Volume.
        virtual void display() const override;                //Method for display to be implemented.
    private:
        T sideX;                                              //Side X of Box.
        T sideY;                                              //Side Y of Box.
        T sideZ;                                              //Side Z of Box.
};

#endif // BOX_H_INCLUDED
