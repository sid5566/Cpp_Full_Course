#include<iostream>
using namespace std;                //LEARNING ABOUT FUNCTION OVER LOADING 
int sum(int num_1,int num_2,int num_3)
{
    return num_1+num_2+num_3;           //FUNCTION OVERLOADING IS JUST SIMPLE AS CREATING FUNCTION 
}                                        //IN WHICH WE CREATE SAME NAME OF FUNCTION BUT WITH DIFFERENT VALUE 
int sum(int num_1,int num_2)
{
    return num_1+num_2;
}
int main()
{
    int num_1,num_2,num_3;
    num_1=50;32`25
    num_2=30;
    num_3=20;
    cout<<sum(num_1,num_2,num_3)<<endl;
    cout<<sum(num_1,num_3)<<endl;
return 0;
}