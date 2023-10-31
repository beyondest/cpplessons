#include "scope_test.h"
#include "clock.h"
using namespace std;
int test_scope()
{
    cout<<"C"<<endl;
    myclock C(10,10);
    
    C.showtime();
}