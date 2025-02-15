#include<iostream>

using namespace std;
int main(){

    int first{123};
    float sec{345};
    int fist{900};

    int *pt{&first};
    float *se{&sec};
    double *fg{nullptr};
    cout<<sizeof(pt)<<endl;
    cout<<sizeof(se)<<endl;
    cout<<sizeof(fg)<<endl;
    cout<<pt<<"     Will print address"<<endl;
    cout<<*pt<<"        Will print value Derefferencing"<<endl;
    pt=&fist;  // Assigning Different Address to Pointer
    cout<<pt<<  "Kio"<<endl;

// Changing value using pointers
   *pt=90;
   cout<<first;

    return 0;
}
