#include <iostream>
using namespace std;
class Base1
{
protected:
    int a;
    int b;

public:
    void setdata1()
    {
        a = 20;
        b = 10;
    }

    void getdata1()
    {
        cout << a << endl
             << b << endl;
    }
};

class Base2
{
protected:
    int c;
    int d;

public:
    void setdata2()
    {
        c = 5;
        d = 15;
    }

    void getdata2()
    {
        cout << c << endl
             << d << endl;
    }
};

class derive : public Base1, public Base2
{

public:
    void func()
    {
        cout << "the value of a , b ,c and d are ";
        getdata1();
        getdata2();
    }

    int sum()
    {
        int add;
        add = a + b + c + d;
        return add;
    }
};

int main()
{

    derive obj;
    obj.setdata1();
    obj.setdata2();
    obj.func();
    int add;
    add = obj.sum();

    cout << "the addition of a, b, c, and d is : " << add << endl;

    return 0;
}