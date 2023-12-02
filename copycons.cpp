#include<iostream>
using namespace std;
class number {
    int a ;
    public : 
number(){
    a = 0;
}
number (int num ){
    a = num;
}

number (number &obj ){
    cout << "copy constracter callled!! "<< endl ;
    a = obj.a ;
}

void display(){
    cout<< "the numbear of this object is :"<< a << endl;
}

~number(){
    cout << "dustracter is called :"<<  endl;
}
};
int main(){
    number x,y,z(45), R ;
     x.display();
     y.display();
     z.display();

// number z1(z);     // copy constracter is invoked 
// number z1(x);
// number z1(y);

R = x ;
R.display();    // copy constracter is not invoked 

     number z1 = z ;
     z1.display(); //copy  constracter is invoked 
// number z1(x);
     number z2 = x ;
z2.display(); 
     number z3 = y ;
     z3.display(); 
    
    return 0;
}