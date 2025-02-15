#include<iostream>

using namespace std;

int main(){

char abb{'h'};
//char nm{'hj'} only one word is allowed
cout<<sizeof(abb)<<endl;
cout<<abb<<endl;

char nu{108};
cout<<nu<<endl;
cout<<static_cast<int>(nu)<<endl;

}