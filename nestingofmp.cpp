#include<iostream>
using namespace std;
class binary{
private : 
string s ;
void chk_binary();

public :
void read();
void once_comeliment();
void display();

};
void binary :: read(){
    cout << "enter the binary number ";
    cin>>s ; 

}

void binary :: chk_binary(){
    for (int i = 0 ; i < s.length() ; i++){
        if (s.at(i) != '0' && s.at(i)!= '1'  )
        {
           cout<<  "incorrect binary formate "<< endl; 
           exit(0);
        }
    }
}
 
 void binary ::  once_comeliment(){
    chk_binary ();
    for (int  i = 0; i < s.length(); i++)
    {
        if ( s.at(i) == 0){
            s.at(i) = '1' ;
        }
        else{
            s.at(i) = '0' ;
        }
    }
 }

 void binary :: display(){
    cout << "displaying your binary number " << endl;
    for(int i = 0 ; i <s.length(); i++){
cout<< s.at(i) << endl;
    }
 }


int main(){
    binary b;
    b.read();
    b.display();
    b.once_comeliment();
    b.display();
    
    return 0;
}