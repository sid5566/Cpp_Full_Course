#include<iostream>
using namespace std;
                                    //LEARN ABOUT FUNCTION AND PROTOTYPE, PARA METER ,ACTUAL FUNCTION
int subation(int num_1,int num_2); //<--------THIS IS FUNCTION PROTOTYPE
int sumation(int num_1,int num_2);
void PEFN();
int main()
{
    int a,b;
    cout<<"enter first value"<<endl;
    cin>>a;
    cout<<"enter first value"<<endl;
    cin>>b;
                    //THIS INT A,B VALUE ARE ACTUAL FUNCTION
    cout<<"your answer from sumation is = "<<sumation(a,b)<<endl;
    cout<<"your answer form subation is = "<<subation(a,b)<<endl;
     PEFN();
return 0;
}
int sumation(int num_1,int num_2) //<-----------THIS IS FUNCTION
{       //NUM_1 AND NUM_2 ARE FORMAL PARAMETER
   int c=num_1+num_2;
   return c;
}

int subation(int num_1,int num_2)
{
   int c=num_1-num_2;
   return c;
}

void PEFN()
{
    cout<<"enter your first no";
}