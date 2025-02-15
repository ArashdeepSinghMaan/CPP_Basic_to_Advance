#include<iostream>

using namespace std;

int main(){
bool one{true};
bool twi{false};
bool tri{true};
bool fo{0};
int value{50};
int value2{68};


cout<<std::boolalpha;
cout<<(one&&twi)<<endl; //and
cout<<(one||twi)<<endl; //or
cout<<(!tri)<<endl; // not
cout<<!(one||tri)<<endl; // nor
cout<<!(one&&twi)<<endl; //nand
cout<<(one&&twi&&tri)<<endl; //multi and
cout<<((one&&twi)||fo)<<endl; //Combination; 
// Combining with relational
cout<<!((value>value2)&&(value<value2))<<endl;



    return 0;
}