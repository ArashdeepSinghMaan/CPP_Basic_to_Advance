#include<iostream>
#include<limits>

using namespace std;

int main(){
cout<<"============Interger=========="<<endl;
cout<<std::numeric_limits<int>::lowest()<<endl;
cout<<std::numeric_limits<int>::min()<<endl;
cout<<std::numeric_limits<int>::max()<<endl;

cout<<"============Float=========="<<endl;
cout<<std::numeric_limits<float>::lowest()<<endl;
cout<<std::numeric_limits<float>::min()<<endl;
cout<<std::numeric_limits<float>::max()<<endl;


cout<<"============double=========="<<endl;
cout<<std::numeric_limits<double>::lowest()<<endl;
cout<<std::numeric_limits<double>::min()<<endl;
cout<<std::numeric_limits<double>::max()<<endl;


cout<<"============long=========="<<endl;
cout<<std::numeric_limits<long>::lowest()<<endl;
cout<<std::numeric_limits<long>::min()<<endl;
cout<<std::numeric_limits<long>::max()<<endl;


cout<<"============long double=========="<<endl;
cout<<std::numeric_limits<long double>::lowest()<<endl;
cout<<std::numeric_limits<long double>::min()<<endl;
cout<<std::numeric_limits<long double>::max()<<endl;
    return 0;
}