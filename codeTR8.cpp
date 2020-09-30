#include<iostream>
using namespace std;

typedef union codeTR8           //trail of enum AND struct
{
    /* data */
    int eId;
}oa;



int main()
{
   oa CODER;
    CODER.eId = 1;
    cout<<"The value is "<<CODER.eId<<endl; 
return 0;
}