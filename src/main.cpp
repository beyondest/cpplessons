#include <iostream>

using namespace std;
const int a=10;

class mm
{
private:
    int j;
    /* data */
public:
    mm(int i):j(i){};
    ~mm(){};
    int f(){};
};

mm obj(10);



int main()
{
    
    char s[]="hello";
    s[0]='B';
    cout<<s<<endl;
    return 0;
}

