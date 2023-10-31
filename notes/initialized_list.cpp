#pragma once

#include <iostream>
using namespace std;
//every variable in class had better be initialized by initialized list!!!
//evert obj of other class has to be initialized by initialized list!!!
class B
{
private:
    int c;
public:
    B(int c):c(c){};
    ~B(){};
    void show()
    {
        cout<<"B.c"<<this->c<<endl;  
    }
};
class A
{
private:
    int a;
    int b;
    B objb;
public:
    A(int a,int b,int c):a(a),b(b),objb(c){};   //initialized list
    ~A(){};
    void showb()
    {
        this->objb.show();
    }
    
    
};



