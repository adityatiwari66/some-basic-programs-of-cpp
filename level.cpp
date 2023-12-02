#include <iostream>
using namespace std;
class student
{
    int stu_rollNo;

public:
    void setdata()
    {
        cout << "enter the roll No. : " << endl;
        cin >> stu_rollNo;
    }
};

class exam : public student
{
protected:
    int math, phy;

public:
    void marks(float, float);
};

void exam ::marks(float m1, float m2)
{

    math = m1;
    phy = m2;
}

class resalt : public exam
{
public:
    int percentage()
    {
        return (math + phy) / 2;
    }
};
int main()
{
    int total_percen;
    resalt r1;
    r1.setdata();
    r1.marks(95.0, 95.7);
    total_percen = r1.percentage();
    cout << "the total percentage is : " << total_percen << endl;
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "this is num ";
        break;

    default:
        break;
    }
    return 0;
}
