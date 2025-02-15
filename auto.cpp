#include<iostream>


using namespace std;

int main(){

auto hell{"Hello"};
auto var1{12};
auto var2{13.0};
auto var3{14.0f};
auto var4{15.0l};
auto var5{'e'};

auto var6{123u};
auto var7{123ul};

cout<<hell<<endl;
cout<<sizeof(hell)<<endl;
cout<<sizeof(var1)<<endl;
cout<<sizeof(var2)<<endl;
cout<<sizeof(var3)<<endl;
cout<<sizeof(var4)<<endl;
cout<<sizeof(var5)<<endl;
cout<<sizeof(var6)<<endl;
cout<<sizeof(var7)<<endl;


    return 0;
}