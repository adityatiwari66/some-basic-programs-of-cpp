#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int year;
    float intterstrate;
    float returnvalue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r); // r can be a value like 0.04
    bankDeposit(int p, int y, int R);   // R can be a value like 14

    void show();
};

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    intterstrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intterstrate);
    }
}

bankDeposit::bankDeposit(int p, int y, int R)
{
    principal = p;
    year = y;
    intterstrate = float(R) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intterstrate);
    }
}

void bankDeposit ::show()
{
    cout << endl
         << "principal ammount was " << principal
         << " return value after " << year << "year is " << returnvalue << endl;
}
int main()
{
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r " << endl;
    cin >> p >> y >> r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and r " << endl;
    cin >> p >> y >> R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();

    return 0;
}