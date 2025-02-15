#include<iostream>

using namespace std;

int main(){
    // Null Termination String \0 for char arrays

    char message[]{'H','e','l','l','o','\0'};
    cout<<message<<endl;
    //BUt it does not work for number arrays like int,float,double
    cout<<sizeof(message)/sizeof(message[0])<<endl;

    //string literals
    char messgae[]{"Hello"};
    //Auto conersion to char
    //Cpp automatically adds a null terminator 
    cout<<sizeof(messgae)<<endl;
    cout<<messgae[3]<<endl;
}