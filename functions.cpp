#include<iostream>

using namespace std;

void enter_bar (int age){
    if(age>=18){
        cout<<"You can Enter"<<endl;
    }
    else{
        cout<<"Nahi Ja sakte Bachhe"<<endl;
    }
}

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}

void empty(){
    cout<<"Hello"<<endl;
}
int lucky_number(){
    return 23;
}

//Argument Scope:Copies
double increment(double a, double b){
    double result =(++a)*b; // Change will happen to copies only Original
    //variables will have no effect

    return result;
}
int main(){
 
enter_bar(23);
cout<<"Maximum number is"<< maximum(12,23)<<endl;
empty();
cout<<lucky_number() <<endl;
cout<<increment(23.40,89.09)<<endl;
double c{90.80};
double d{87.67};
cout<<increment(c,d)<<endl;
cout<<c<<" "<<d<<endl; //NO effect of in function changes

    return 0;
#include "heade.h"