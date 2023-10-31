#pragma once
#include <iostream>

using namespace std;

                    //each is different, this is function overload
void hello(int a)
{
    cout<<a;
}
void hello(double a)
{
    cout<<a;
}
void hello(int a,int b=1)
{
    cout<<a;
}

                //set default params

void f(int a, int b=99);    //this is usually set in header
void f(int a, int b)        //when define,dont specify default again
{
    
}