#include<iostream>
using namespace std;

int main()    // learning POINTER 
{
    int num_a=12;
    int* num_b=&num_a; //one star (*) one pointer

    cout<<num_b<<endl;

    cout<<*num_b<<"\n"<<endl;

 int** num_c =&num_b;
 cout<<**num_c;

 int*** num_d=&num_c;
 cout<<num_d;
return 0;
}