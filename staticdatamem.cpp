#include<iostream>
using namespace std;

class employe { 
    int id ; 
    static int count ;
    public: 


    void setdata(){ 
         
         cout << "enter the id " ;
         cin >> id ;
         count++ ;
         
    }
    void getdata();
};
int employe :: count =100 ;

void employe :: getdata(){
        cout << "the id of employe is "<< id << "and the id number is " << count << endl;

    }

int main(){
    employe e1[4] ; 
    e1[0].setdata(); 
    e1[0].getdata();

    e1[1].setdata(); 
    e1[1].getdata();

    e1[2].setdata(); 
    e1[2].getdata();

    e1[3].setdata(); 
    e1[3].getdata();


    
    return 0;
}
