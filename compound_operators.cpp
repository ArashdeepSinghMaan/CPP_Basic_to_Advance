#include<iostream>

using namespace std;

int main(){
int value{67};
value+=5;
cout<<"+= "<<value<<endl;// 72
value-=5;
cout<<"-= "<<value<<endl;//67
value*=2;
cout<<"*= "<<value<<endl;//134
value/=7;
cout<<"/= "<<value<<endl;//19
value%=3;
cout<<"%= "<<value<<endl;//1


    return 0;
}