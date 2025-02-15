#include<iostream>
using namespace std;

int main(){

    int arr[10];
 for (size_t i{0};i<11;i++){
    arr[i]=10*i;
 }

//can use function size() for arrays unbounded.
//or
//can use sizeof(array)/sizeof(array[0]) which give us no. of elements in the array.
 
    float slary[5]{123,234,567,890,123};
    //Without size declation

    double inn[]{123,57,788};
   
for (size_t i{0};i<10;i++){
    cout<<arr[i]<<endl;
}

//Range Based for loop

for(auto value: inn){
    cout<<value<<endl;
}

cout<<slary[3]<<endl;

//Constant Array
const int multi[]{123,78,98};
//multi[0]=23;


//Operations on array elemnts like sum
int sum{};
for (auto value: slary){
   sum+=value;
}
cout<<"Sum of array elemnts"<<sum<<endl;

double even[]{};
for (auto value: slary){
   if(value/2==0){
    for(size_t i{0};i<sizeof(slary);i++){
        even[i]=value;
    }
   }
}
cout<<even[4]<<endl;


    cout<<"Last even Value"<<endl;


//Non initialized elemnts will be assigned zero by compiler.

return 0;
}