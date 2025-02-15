#include<iostream>

using namespace std;

int main(){
short int hell{123};
short int hello{235};

char num1{40};
char num2{45};
cout<<sizeof(hell)<<endl;
cout<<sizeof(hello)<<endl;
auto res{hell+hello};

cout<<res<<endl;
cout<<sizeof(res)<<endl;

auto re{num1+num2};
cout<<re<<endl;
cout<<sizeof(re)<<endl;
    return 0;
}