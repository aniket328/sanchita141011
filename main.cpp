#include <iostream>

using namespace std;
class T2;
class T1
{
    int a;
public:
    T1(){}
    void geta(int x)
    {
        a=x;
    }
    void display()
    {
        cout<< " a = " << a<< endl;
    }
    friend void operator>(T1,T2);

};

class T2
{
    int b;
public:
    void getb(int x)
    {
        b=x;
    }
    void display()
    {
        cout<< " b = " << b<< endl;
    }
    friend void operator>(T1,T2);
};

void operator>(T1 m, T2 n)
{
    m.a>n.b?cout<<"a is bigger"<<endl:cout<<"b is bigger"<<endl;
}
int main()
{
    T1 x;
    T2 y;
    x.geta(17);
    y.getb(9);
    x.display();
    y.display();
    x>y;
    cout << "Hello world!" << endl;
    return 0;
}
