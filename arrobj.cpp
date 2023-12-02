#include<iostream>
using namespace std;
class shopItem{

int id ; 
float price ;

public: 

void setdata( int a , float b ){
    id = a ;
price = b ; 

}

void getdata(){
    cout <<  "the item id is " << id << endl ;

    cout << "the item price  is " << price << endl ;

    
}
};
int main(){
    int size; 
    cout << " enter the value of size is : "<< endl;
    cin >> size ;
    shopItem *s1 = new shopItem[size] ;
    
int a , b  ;
for(int i = 0 ; i < size ; i++){
 cin >> a >> b ; 
s1-> setdata(a , b );
s1-> getdata();
}
    

    
    return 0;
}
