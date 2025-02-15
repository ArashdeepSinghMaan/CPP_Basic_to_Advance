#include<iostream>
using namespace std;

int main(){
int age;
string name;
cout<<"Enter your age: "<<endl;
cin>>age;
cin.ignore(); // To clear buffer of new line from cin>>age 
cout<<"Enter Your name: ";
//cin>>name;
getline(cin,name);


cout<<"your age is "<<age<<endl;
cout<<name<<endl;
cerr<<"This error"<<endl;
clog<<"This is to store information";

    return 0;
}