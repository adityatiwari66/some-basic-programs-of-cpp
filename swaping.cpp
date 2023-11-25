#include<iostream>
using namespace std;
int swap(int * a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main(){
    int a = 2  ;
    int b = 3; 
    cout<< a << endl << b << endl ; 
    swap(&a,&b) ;
     cout<< a << endl << b << endl ;
    return 0;
}
