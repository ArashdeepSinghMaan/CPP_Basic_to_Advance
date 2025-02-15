#include<iostream>

using namespace std;

int main(){
//Bad things
// Using Uninitialzed pointer

//int * pin;
//*pin=50;
//cout<<pin<<endl;
//cout<<*pin<<endl; // OS will stop execution

// Second Bad thing
/*
int *pen{};
*pen=80;
cout<<pen<<endl;
*/
int *po{nullptr};
cout<<sizeof(po)<<endl;
po=new int; //Dynamic Memory Allocation
*po=89;
cout<<po<<endl;
cout<<*po<<endl;
cout<<"Hello"<<endl;

delete po;
po = nullptr;

//Dynamically Initialization

int *point_1{new int{90}};
double *point_2{new double{78}}; // {}is known as uniform initialaziation

cout<<*point_1<<endl;
cout<<*point_2<<endl;

delete point_1;
point_1=nullptr;

delete point_2;
point_2=nullptr;

//Still availble for use

point_1=new int(75);
cout<<point_1<<endl;

//Donot call delte twice

delete point_2;
point_2=nullptr;
cout<<point_2<<endl; //
cout<<*point_2<<endl; 
    return 0;
}