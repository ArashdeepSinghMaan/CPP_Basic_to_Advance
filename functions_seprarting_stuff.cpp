#include<iostream>

using namespace std;
// Declaring Function
int sum(int a , int b); //Function Header or Function Prototype


int main(){

std::cout<<sum(34,78)<<endl;
    return 0;
}


//Defing Function
int sum(int a , int b){
    int result = a+b;
    return result;
}