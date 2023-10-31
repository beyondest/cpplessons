#include "point3d.h"

point3d::point3d(float x,float y,float z)
{
    this->x=x;
    this->y=y;
    this->z=z;
};
int point3d::print()
{
    cout<<this->x<<endl;
    cout<<this->y<<endl;
    cout<<this->z<<endl;

}