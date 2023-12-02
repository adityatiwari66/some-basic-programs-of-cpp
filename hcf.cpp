#include <iostream>
int main()
{
    std::cout << "enter the two integers";
    int a, b, temp,hcf,f;
    std::cin >> a;
    std::cin >> b;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    // std::cout<<"\nthe value of a and b is"<<"\t"<<a<<b;
    for (f = 1; f <= a; f++)
    {
        if (a % f == 0 && b % f == 0)
        {
            hcf=f;
        }
    //    hcf=f;
    }
    std::cout<<"the highest common fractor of"<<a<<"and"<<b<<"is"<<hcf;

    return 0;
}