#include<iostream>
int main()
{
    cout<<"enter the value to print";
    int n;
    cin>>n;
    cout<<"the fractor of number"<<n<<"is"<<endl;
    for(int f=1;f<n;f++)
    {
        if(n%f==0)
        {
            cout<<f<<"\t";
        }
    }
    return 0;
}