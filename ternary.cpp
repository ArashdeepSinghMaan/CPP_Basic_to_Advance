#include<iostream>
using namespace std;

int main(){
int num1{150};
int num2{120};
bool fast{true};
bool slow{true};

int result=(num1>120) ? fast :slow;

cout<<result;


    return 0;
}