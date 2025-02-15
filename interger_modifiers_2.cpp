#include<iostream>

using namespace std;

int main(){

int vlaue1{10};
int value2{-300};
signed int val3{10};

cout<<"value1 "<<sizeof(vlaue1)<<endl;
cout<<"Value2 "<<sizeof(value2)<<endl;
cout<<"value3 "<<sizeof(val3)<<endl;

//unsigned int val{-5}; //with unsigned modifier cannot assign sign
unsigned int val(-5); // No error but a garbage value will be in the result
cout<<val<<endl;

short int vb{12};

cout<<sizeof(vb)<<endl;

short jk{12};
cout<<(jk)<<endl;

long int nm{12};
cout<<sizeof(nm)<<endl;

long long int nh{12};
cout<<sizeof(nh)<<endl;
    return 0;
}