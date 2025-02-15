#include<iostream>
#include<iomanip>

using namespace std;

int main(){

float num1 {-1.2234446674837789f};
double num2 {2.7809369007383003890};
long double num3 {1.25582659456584856184L};
//./cout<<std::setprecision(20);
//f to indicate it is floating number and L to indicate that it long otherwise compiler will chop off
double jmkj{3.48e-11};
cout<<jmkj<<endl;
cout<<"num1 "<<num1<<" "<<sizeof(num1)<<endl;
cout<<"num2 "<<num2<<" "<<sizeof(num2)<<endl;
cout<<"num3 "<<num3<<" "<<sizeof(num3)<<endl;

float kl{};
cout<<(num1/kl)+num2<<endl;
float kj{};
cout<<kl/kj<<endl;
    return 0;
}