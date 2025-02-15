#include<iostream>

using namespace std;

int main(){
//int vr{12};
int *piut{ };

if(!(piut==nullptr)){
    cout<<"Valid Address"<<endl;
}
else{
    cout<<"Invalid Address"<<endl;

}
//pointer converts to boolean  will be true if it is valid 
if(piut){
    cout<<"valid"<<endl;
}
else{
    cout<<"invalid"<<endl;
}


    return 0;
}