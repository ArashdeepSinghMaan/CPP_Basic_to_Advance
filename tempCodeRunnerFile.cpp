#include<iostream>
#include<cctype>
#include<iterator>
using namespace std;

int main(){

char name{'D'};
char gh{'@'};
char lo{'4'};
char qo{'#'};
// Alpha numeric
cout<<std::isalnum('C')<<endl;
cout<<std::isalnum('1')<<endl;
cout<<std::isalnum('!')<<endl;

if(std::isalnum(qo)){
    cout<<qo<<" is alphanumeric"<<endl;
}
else{
    cout<<qo<<" is not alphanumeric"<<endl;
}

//Aplphabetic
std::cout<<boolalpha;
cout<<std::isalpha(qo)<<endl;
cout<<std::isalpha(name)<<endl;
cout<<std::isalpha(lo)<<endl;
cout<<std::isalpha(gh)<<endl;

//Blank character

char message[]{"Hello, How are you?"};
// Check how many blank character are there

int counter{};
for(size_t i{};i<std::size(message);i++){
    if(std::isblank(message[i])){
        cout<<"Found one at "<<i<<endl;
        counter++;
    }

}
cout<<"Total Blank characters are "<<counter<<endl;
    return 0;
}