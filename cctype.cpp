#include<iostream>
#include<cctype>
#include<iterator>
using namespace std;

int main(){

char name{'D'};
char gh{'@'};
char lo{'s'};
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

char message[]{"Hello, How are you? 1 4 5"};

// Check how many blank character are there

int counter{};
for(size_t i{};i<(sizeof(message)/sizeof(message[i]));i++){
    if(isblank(static_cast<unsigned char>(message[i]))) {
        cout<<"Found one at "<<i<<endl;
        counter++;
    }

}
cout<<"Total Blank characters are "<<counter<<endl;

//Uppercase lowercase checking
int count_lower{};
int count_upper{};
for(size_t i{};i<(sizeof(message)/sizeof(message[i]));i++){
    if(islower(static_cast<unsigned char>(message[i]))) {
        cout<<"Found one at "<<i<<endl;
        count_lower++;
    }
    else if((isupper(static_cast<unsigned char>(message[i])))){
        cout<<"FOund Upper Case at "<<i<<endl;
        count_upper++;
    }

}
cout<<"Total lower characters are "<<count_lower<<endl;
cout<<"Total upper characters are "<<count_upper<<endl;


cout<<"Original "<<lo<<"  "<<toupper(lo)<<endl;
cout<<"Original "<<name<<" "<<tolower(name)<<endl;
// for array need to do single-single element
for(size_t i{};i<(sizeof(message)/sizeof(message[i]));i++){

        toupper(message[i]);
        
    }
std::cout<<message<<endl;

//Check if it is a digit 
int counter_digit{};
for(size_t i{};i<(sizeof(message)/sizeof(message[i]));i++){
    if(isdigit(static_cast<unsigned char>(message[i]))) {
        cout<<"Found one at "<<i<<endl;
        counter_digit++;
    }

}
cout<<"Total Digit characters are "<<counter_digit<<endl;

    return 0;
}