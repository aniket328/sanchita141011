#include <iostream>

using namespace std;

template<class ani>
ani add(ani a, ani b)
{
    return a+b;
}

int main()
{
    double x=32.678, y=78, z;
    z=add(x,y);
    cout<< "The sum is: "<< z << endl;
    return 0;
}
