#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>

class myclock
{
private:
    /* data */
    int hour_limit;
    int minute_limit;
    int hour_num;
    int minute_num;
    bool minute_increase();
    bool hour_increase();

public:
    myclock(int hour_limit,int minute_limit);
    ~myclock();
    int set_hour(int hour);
    int set_minute(int minute);
    bool increase();
    int showtime();
};

int mydelay_ms(int count);


#endif