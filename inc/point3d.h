#ifndef POINT3D_H
#define POINT3D_H
#include <iostream>
using namespace std;
class point3d
{
    public:
        point3d(float x,float y,float z);
        int print();
        float test;
    private:
        float x;
        float y;
        float z;
        float mmp;
};

#endif