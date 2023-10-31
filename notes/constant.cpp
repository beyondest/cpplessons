#pragma once
#include <iostream>
/**
 * const use to specify a varible that cannot be changed, notice that const is just const for compiler
 * when const used in function(const class* i), it is used to protect (*i) wont be changed(usually use pointer instead of variable to faster)
 * const object: can only use const methods(must be specified repeated both in declaration and defination)
*/


extern const int bufsize; //use extern to define const somewhere else but declare it now
const int bb=10;

char * const q="abc";   //pointer cannot be changed
const char *p="aaa";    //what pointed cannot be changed
char const *i="ad";     //same as above
const char* s="hello";
char ss[] ="hello";

int f(const int* m)
{
    //*m=10;        cannot change
    return 2*(*m);
}
int g(int* m)
{
    *m=19;          //can change
    return 2*(*m);
}




class A
{
private:
    /* data */
    int inner;
    int w;
    const int w_const;      //const member of varible must be initialized in initialized list
    enum{size=100};         //??
    int array[size];

public:
    A():inner(10),w_const(9){};
    ~A(){};
    int show(/* const A* this*/) const    //the way to specify constant method
    {

        std::cout<<this->inner<<std::endl;
        //this->inner=100;  cannot work because obj cannot be changed
        return 0;};
    int change(/* A* this */){return 0;};
    int show(/* A* this */){};      //overload because no const

};
void main()
{
    const A a;
    //a.change();       cannot work because methods may change obj
    a.show();


}










