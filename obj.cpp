#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void complexobj(complex O1, complex O2)
    {
        a = O1.a + O2.a;

        b = O1.b + O2.b;

        cout << "the compiex number is " << a << "and " << b << endl;
    }
    void printnum()
    {
        cout << "the compiex number is " << a << "and " << b << endl;
    }
};
int main()
{
    complex a1, a2, a3;
    a1.setdata(2, 4);
    a1.printnum();

    a2.setdata(2, 4);
    a2.printnum();

    a3.complexobj(a1, a2);
    return 0;
}