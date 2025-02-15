#include<iostream>
#include<cstring>

using namespace std;

int main(){
    strlen ;//Length of string
    const char meesage1[]{"The sky is blur"};
    const char* message2{"THe sky is blue"}; //decayed array

    cout<<strlen(meesage1)<<endl;
    cout<<strlen(message2)<<endl;
    cout<<sizeof(*message2)<<endl;// Will include null character
// Comparing strings

cout<<strcmp(meesage1,message2)<<endl;

//other way strncmp can specify numner of characters to compare
cout<<strncmp(meesage1,message2,5)<<endl;


//Searching a character strchr

cout<<strchr(meesage1,'e')<<endl;
    return 0;
}