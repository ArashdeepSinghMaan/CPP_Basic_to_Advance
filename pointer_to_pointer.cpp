#include<iostream>

using namespace std;

int main(){

int val = 56;
int *ptr =&val;

int **ptrr=&ptr;

cout<<*ptr<<endl;
cout<<**ptrr<<endl;

    return 0;
}