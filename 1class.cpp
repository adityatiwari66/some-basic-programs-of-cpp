#include <iostream>
class bu
{
private:
    int a;
    void printa()
    {
        std::cout<<"a"<<a;
    }

protected:
    float b;
    void printb()
    {
        std::cout<<"b"<<b;
    }

public:
    int c;
    void printc()
    {
        std::cout<<"c"<<c;
    }
    void getdata()
    {
        std::cout<<"enter the three values of a b and c";
        std::cin>>a>>b>>c;
    }
};
int main()
{
   
return 0;
}