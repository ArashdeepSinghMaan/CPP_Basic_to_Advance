#include<iostream>
using namespace std;

int main(){
int a {4};
int b{3};
int c{-3};
int d {9};
int e{2};
int f{3};
int g{34};

int result =a+b*c-d/e-f+g; // Multiplicity,Division are first than +/- (From left to right)
/*So first will evaluate b*c=-9
Then -d/e=-9/2=-4.5
a-9-4.5-3+34
4-16.5+34 =22(int)
*/
int result2=a/b*c+d-e+f;
/*a/b=4/3=1
1*-3=-3
-3+9-2+3=7
*/
cout<<"Result:"<<result<<endl;
cout<<"- - -  - - "<<endl;
cout<<"Result2 "<<result2<<endl;

    return 0;
}