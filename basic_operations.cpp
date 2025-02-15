#include<iostream>

using namespace std;
int main(){
int var1{34};
int var2{35};
float var3{34.0f};

cout<<var1+var2<<"  Addition"<<endl;
cout<<var1+var3<<"  Addition of different d types"<<endl;
cout<<var3-var2<<"  Subtraction"<<endl;
cout<<var2/var1<<"  division"<<endl;
cout<<var1/var3<<"  division"<<endl;
cout<<var1*var2<<"  Multiplication"<<endl;
cout<<var2%var1<<"  Modulus"<<endl;



    return 0;
}