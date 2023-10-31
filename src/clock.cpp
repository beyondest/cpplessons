#include "clock.h"
using namespace std;

void hello()
{
    cout<<"hello"<<endl;
    
}
int global=1;

myclock::myclock(int hour_limit,int minute_limit)
{
    cout<<"beginclass"<<endl;
    myclock::hour_limit=hour_limit;
    myclock::minute_limit=minute_limit;
    myclock::hour_num=0;
    myclock::minute_num=0;
}
myclock::~myclock()
{
    cout<<"endclass"<<endl;
}
bool myclock::increase()
{
    bool out;
    out=myclock::minute_increase();
    if (out)
    {
        out=myclock::hour_increase();
    }
    return out;
}
int myclock::showtime()
{
    cout<<"time is"<<myclock::hour_num<<":"<<myclock::minute_num<<endl;
}
bool myclock::minute_increase()
{
    if (myclock::minute_num>myclock::minute_limit)
    {
        /* code */
        myclock::minute_num=1;
        return true;
    }
    else
    {
        myclock::minute_num++;
        return false;
    }
    
}
bool myclock::hour_increase()
{
    if (myclock::hour_num>myclock::hour_limit)
    {
        /* code */
        myclock::hour_num=1;
        return true;
    }
    else
    {
        myclock::hour_num++;
        return false;
    }
}
int myclock::set_hour(int hour)
{
    myclock::hour_num=hour;
    return 0;
}
int myclock::set_minute(int minute)
{
    myclock::minute_num=minute;
    return 0;
}

int mydelay_ms(int count)
{
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j=1000;j>0;j--)
        {
            for(size_t k=1000;k>0;k--);
        }   
    }
    return 0;
}
