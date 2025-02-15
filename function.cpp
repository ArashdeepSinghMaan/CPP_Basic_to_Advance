#include<iostream>
using namespace std;

int add(int first,int second){
    int sum =first +second;
    return sum;
}

float multi(float num_1,float num_2){
 float res=num_1*num_2;
 return res;


}

int main(int argc, char ** argv){
int first{-19};
int second{10};

int total=add(first,second);
float num_1{2.6};
float num_2{3.6};
cout<<"Result of multiplication "<< multi(num_1,num_2)<<endl;
cout<<total;
return 0;

}