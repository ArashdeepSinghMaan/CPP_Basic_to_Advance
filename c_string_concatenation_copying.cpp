#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){

//strcat
char firs[43]{"Hello"};
char seco[34]{" World!"};

cout<<strcat(firs,seco)<<endl;
cout<<strcat(seco," Welcome")<<endl;

char *dest1= new char[30]{'F','G','h','k','o','\0'};
char *dest2=new char[10]{' ','q','e','r','d','z','\0'};

cout<<strcat(dest1,dest2)<<endl;

//strncat
cout<<strncat(dest1,dest2,6)<<endl;
//FGhko qerdz qerdz  (As 6 charactes from second gets copied at end of first)

//strcpy
const char *source="C++ is a multipurpose language";
char *dest=new char[std::strlen(source)+1];

cout<<strcpy(dest,source)<<endl;
cout<<dest<<endl;

//strncpy
char *des=new char[1];
cout<<strncpy(des,source,7)<<endl;
    return 0;
}
