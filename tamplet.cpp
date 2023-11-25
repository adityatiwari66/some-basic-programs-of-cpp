#include <iostream>
using namespace std;
template< class T1,class T2 >
class vector
{
    T1 arr;
    T1 size;
public:
    vector(T1 arr, T1 size)
    {
      this-> arr = arr;
       this-> size = size;
    }
    void display()
    {
        cout << "the value of *arr is " << arr << endl;
        cout << "the value of size is " << size << endl;
    }
};

int main()
{
    int a = 4;
//float b = 6.06;
    vector< float , float > vec(5.9, 5.91);
    vec.display();

    return 0;
}
