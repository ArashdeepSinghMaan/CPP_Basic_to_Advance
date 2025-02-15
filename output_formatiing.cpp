#include<iostream>
#include<iomanip>
#include<ios>

using namespace std;

int main(){
 cout<<std::endl;
 cout<<"hello\n";
 cout<<"\n";
 cout<<"good"<<endl<<flush;

//set width

cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;

//left align
cout<<left;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;


//right align
cout<<right;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<-123.50<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;

//Internal alignment
cout<<internal;
cout<<setw(10)<<"name"<<setw(20)<<-123.50<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<+123.50<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;

//set fill
cout<<left;
cout<<setfill('=');
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;

//boolalpha

//show pos
cout<<showpos;
cout<<setw(10)<<"name"<<setw(20)<<123.50<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
cout<<setw(10)<<"name"<<setw(20)<<123.50<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;
//Number base for matting
double num{1230.5};
int nmu2{123};
cout<<noshowpos;
cout<<dec;
cout<<num<<"  "<<nmu2<<endl;
cout<<"======================="<<endl;
cout<<hex;
cout<<num<<"  "<<nmu2<<endl;
cout<<"======================="<<endl;
cout<<oct;
cout<<num<<"  "<<nmu2<<endl;
cout<<"======================="<<endl;
cout<<showbase;
cout<<num<<"  "<<nmu2<<endl;


//Showing point
cout<<showpoint;
cout<<num<<"  "<<nmu2<<endl;


    //uppercase
cout<<uppercase;
cout<<uppercase<<"name"<<setw(20)<<123.50<<endl;
cout<<setw(10)<<"name"<<setw(20)<<"Arash"<<endl;



//setprecision
cout<<setprecision(10);
cout<<num<<endl;
    return 0;
}