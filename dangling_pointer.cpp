#include<iostream>

using namespace std;

int main(){

int *p_number8 {new int{382}}; //Master Pointer
int *p_number9 {p_number8}; // Slave pointer
cout<<p_number8<<"   "<<*p_number8<<endl;

//Only Use slave pointers when master pointer is valid
if(!(p_number8==nullptr)){
    cout<<p_number9<<"  "<<*p_number9<<endl;

}
delete p_number8;
p_number8=nullptr;

if(!(p_number8==nullptr)){
    cout<<p_number9<<"  "<<*p_number9<<endl;
    
}
else{
    cout<<"master was not valid"<<endl;
}
    return 0;
}