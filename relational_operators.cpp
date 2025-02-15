#include<iostream>
using namespace std;

int main(){
// Use () for comapring

int value{50};
int value2{68};
cout<<std::boolalpha;
cout<<(value>value2)<<endl;
cout<<(value<value2)<<endl;
cout<<(value==value2)<<endl;
cout<<(value<=value2)<<endl;
cout<<(value!=value2)<<endl;
//<< ,>> has predence over relational operators. So we are using ().



    return 0;
}