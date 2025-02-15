#include<iostream>

using namespace std;

int main(){

char mai{'A'};

char *po{&mai};
cout<<po<<endl;
cout<<*po<<endl;
//String Literal Initialization

char *P_mess{"Hello World"}; // will convertd to character array
cout<<P_mess<<endl; // Why not address (It is direct initialization) Does not work for other types
cout<<*P_mess<<endl; // Will point to first character

//MOdifyting array initialization

char *par[]{"Hello"};

*par[0]= 'Y';
cout<<par<<endl;





    return 0;
}