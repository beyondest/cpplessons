/**
 * inline function must be defined only in header, opposite to default params
 * inline function will paste code to main and wont be call from cpp
 * declaration=defination, for inline
 * @brief tradeoff between space and time:
 * inline speeds up; but if inline's header is used too often, main code will be very large
 * inline function cant be recursion or any other too large function
 * all the function defined in class is inline
 * or to keep class clean, you can define inline in header after class defined
 * when in c, inline is define f(a) (a)+(a)
 * 
 * 
*/


#include "inline.h"

inline int myinline()
{
    return 0;
}

class rectangle
{
    public:
    rectangle(){};
    ~rectangle(){};
    int a();
    int b();
};


inline int rectangle::a()
{
    return 0;
}
inline int rectangle::b()
{
    return 1;
}