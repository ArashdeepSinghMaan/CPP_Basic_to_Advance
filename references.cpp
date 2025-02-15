#include<iostream>

using namespace std;
int main(){

int int_value{35};
double double_value{33.65};

int& reference_to_int_value{int_value}; //Assign through initialization
int& reference_to_int_value_2=int_value; //Assign through assignment

const double& reference_to_double_value_1{double_value};

cout<<reference_to_double_value_1<<" Original "<<double_value<<endl;
cout<<reference_to_int_value<<" Original "<<int_value<<endl;
cout<<reference_to_int_value_2<<" Original "<<int_value<<endl;

cout<<&reference_to_double_value_1<<" Original address "<<&double_value<<endl;
cout<<&reference_to_int_value<<" Original Add "<<&int_value<<endl;
cout<<&reference_to_int_value_2<<" Original Address "<<&int_value<<endl;

cout<<sizeof(reference_to_double_value_1)<<" Original "<<sizeof(double_value)<<endl;
cout<<sizeof(reference_to_int_value)<<" Original "<<sizeof(int_value)<<endl;
cout<<sizeof(reference_to_int_value_2)<<" Original "<<sizeof(int_value)<<endl;

cout<<sizeof(int&)<<endl;

// Changes on original are automatically gets reflected to aliases
int_value =90;
cout<<reference_to_int_value<<endl;

//Changes in aliases also effect original ones
reference_to_double_value_1=46.00; //references.cpp:39:29: error: assignment of read-only reference 'reference_to_double_value_1'
double_value=67.90;
cout<<double_value<<endl;
//const

//Cannot do reference ka reference
//But it is working here ??
reference_to_double_value_1=reference_to_int_value; //references.cpp:39:29: error: assignment of read-only reference 'reference_to_double_value_1'
cout<<&reference_to_double_value_1<<endl;
cout<<&reference_to_int_value<<endl;
cout<<double_value<<endl;

//Always initailze reference.



    return 0;
}