#pragma once
#include <iostream>
using namespace std;

/**
 * @brief:composition has 3 types:
 * 1,nested
 * 2,include obj of class
 * 3,include pointer of class
 * @note:outside class should use inner class api to touch inner class data
*/

class heart
{
private:
    int bloods;
public:
    heart(int bloods):bloods(bloods){};
    ~heart(){};
    int getbloods()
    {
        return this->bloods;
    }

};

class person
{
private:
    heart heartobj;
public:
    person(int bloods):heartobj(bloods)
    {

    }
    ~person(){};
    person* mates;
    void getheartbloods()
    {
        
        cout<<"hearts.bloods"<<this->heartobj.getbloods()<<endl;
    }
    void getmate()
    {
        cout<<"mates:::"<<endl;
        mates->getheartbloods();
    }

};


