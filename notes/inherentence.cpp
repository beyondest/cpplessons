#pragma once
#include <iostream>
using namespace std;
//B is son of A
/**
 * public:true
 * protected:true only in class defination
 * private: false
 * 
 * 
*/
class Father
{
private:
    
    void fprivate()
    {
        cout<<"father private"<<endl;
    }
protected:
    void fprotect()
    {
        cout<<"father protect"<<endl;
    }
public:
    Father()
    {

    };
    ~Father(){};
    void fpublic()
    {
        cout<<"father public"<<endl;
    }
    void hello(int a)         
    {
        cout<<a<<endl;
        cout<<"hello"<<endl;
    }
};
class Son:public Father
{
    public:
        Son(){};
        ~Son(){};
        void get()
        {
            try
            {
                fprotect(); 
            }
            catch(...)
            {
                cout<<"fprotect cant access"<<endl;
            }
            try
            {
                fpublic(); 
            }
            catch(...)
            {
                cout<<"fpublic cant access"<<endl;
            }
            
            
        }
        
        void hello()   //same name will overide not overload parent in c++
        {
            cout<<"kk"<<endl;
        }
};




