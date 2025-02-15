#include<iostream>
using namespace std;

int main(){

int numbers[]{1,2,3,4,5,6,7,8,9,10};

cout<<numbers[9]<<endl; //garbage value

numbers[220000000000]=34;
//crashed program
cout<<numbers[20]<<endl; //garbage value



    return 0;
}