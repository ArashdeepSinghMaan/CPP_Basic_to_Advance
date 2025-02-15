#include<iostream>

using namespace std;

int main(){
   int ele;
   int els{};
  // int dog{10.2};
   int dog(10.20); //Functional initilization
   int fg=10.20;
   cout<<dog<<endl;
   cout<<fg<<endl;
   int gh(dog+fg);
   cout<<gh<<endl;
   int df{10}; //Brace Initilization
   int ef{11};
    int res{df+ef};
    cout<<res<<endl;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(float)<<endl;
  cout<<sizeof(double)<<endl;

    return 0;
}