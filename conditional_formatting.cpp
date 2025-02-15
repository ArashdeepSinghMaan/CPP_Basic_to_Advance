#include<iostream>
using namespace std;

int main(){
int num1{65};
int num2{30};
int num3{45};
int num4{45};

bool res=(num1>num2);

if (res==true){
    cout<<"sahi hai ----"<<endl;
    if(num3=num4){
        cout<<"Pakka sahi hai"<<endl;
    }
    else{
        cout<<"Pakka galat hai"<<endl;
    }

}
if (!(res==true)){

cout<<"galat hai  "<<endl;
}



    return 0;
}