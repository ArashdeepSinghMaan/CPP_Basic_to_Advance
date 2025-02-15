#include<iostream>

using namespace std;

int main(){
bool red_light{true};
bool green_light{false};

if(red_light==true){
    cout<<"Stop!"<<endl;}
else{
    cout<<"Go Ahead"<<endl;
}


if (green_light){
    cout<<"Go "<<endl;
}
else {cout<<"Stop"<<endl;}

bool hell{};
cout<<hell<<endl;
cout<<boolalpha<<red_light<<endl;

    return 0;
}