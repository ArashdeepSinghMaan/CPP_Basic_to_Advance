#include<iostream>
#include<string>

using namespace std;

int main(){
    //Declaring std::string variables

std::string full_name;  //Empty string
std::string planet {"Earth. Where the sky is blue"};
std::string prefered_planet{planet}; // Initialization with other existing string
std::string message{"Hello There",5};//Initialize with part of a string literal
//Contains Hello

std::string weird_message(4,'e');// Initialize with multiple copies of a char
//contains eeee 

std::string greeting{"hello World"};
std::string saying_hello{greeting,6,5}; //Initialize with part of existing string
//starting at index 6, taking 5 characters

cout<<full_name <<endl;
cout<<planet <<endl;
cout<< prefered_planet<<endl;
cout<<message <<endl;
cout<<weird_message <<endl;
cout<< greeting<<endl;
cout<<saying_hello <<endl;


    return 0;
}