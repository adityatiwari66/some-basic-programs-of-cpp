#include <iostream>
using namespace std;
int main()
{
    char c;

    cout << "enter a character";
    cin >> c;
    isupper(c) ? cout << tolower(c) : cout << isupper(c);

    return 0;
}