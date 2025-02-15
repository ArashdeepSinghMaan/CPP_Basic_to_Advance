#include<iostream>

using namespace std;
int main(){
/*
//Using exceptions
for(size_t i{};i<100000000; i++){

    try{
        int *lot{new int[10000000]};
    }catch(std::exception& ex){
        std::cout<<"Cought exception"<<ex.what()<<endl;
    }
}
*/
//Using std::nothrow option
for(size_t i{};i<100000000000000000;i++){
  int * loot{new(std::nothrow)int[1000000]};

  if(loot ==nullptr){
    cout<<"Memory Allocation failed"<<endl;
  }else{
    cout<<"Memoery Allocation succeeded"<<endl;
  }

    return 0;
}
}