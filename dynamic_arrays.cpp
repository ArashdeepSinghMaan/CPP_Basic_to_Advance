#include<iostream>

using namespace std;

int main(){
size_t size{10};

double *p_salaries{new double[size]}; // p_salaaries array containg garbage values

int *p_students{new(std::nothrow) int [size]{}}; // All initialized to zero

double *p_scores{new(std::nothrow) double[size]{1,2,3,4,5}}; //rest will be zero

if(p_scores){
    for(size_t i{};i<size;i++){
        cout<<p_scores[i]<<endl;
    }
}
/*
does not work here std::size(p_students)   */


//Does not work with range based for loops
/*
for(int stude:p_students){
    cout stude;
}
*/
// Releasing Memory
delete p_students;
p_students=nullptr;
delete p_scores;
p_scores=nullptr;
delete p_salaries;
p_salaries=nullptr;

    return 0;
}