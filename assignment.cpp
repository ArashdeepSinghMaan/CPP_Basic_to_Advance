#include<iostream>

using namespace std;

int main(){
auto var1{123};
cout<<"var1  "<<var1<<endl;

var1=78;
cout<<"var1  "<<var1<<endl;

cout<<"-------------------------------"<<endl;

double var2{44.54};
cout<<"var2  "<<var2<<endl;

var2 = 99.99;

cout<<"var2  "<<var2<<endl;
cout<<"-------------------------------"<<endl;

// Similarly for other type of variables. Basically justifying concept of variable.

auto var3{123u};

var3=-23;  // Will compile but result will be wrong DANGER!
cout<<var3<<endl;



    return 0;
}