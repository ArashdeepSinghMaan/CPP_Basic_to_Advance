#include<iostream>

using namespace std;

int main(){
 int *poi{new int{55}};

 int num{89};
 poi =&num;

 {
    int *p_num{new int{8}}; // Memory die after scope
 } // local scope
//cout<<*p_num<<endl; NOt possible outside scope
 cout<<*poi<<endl; // no way to access heap memory 
 delete poi;
 poi=nullptr;
 cout<<poi<<endl;
    return 0;
}