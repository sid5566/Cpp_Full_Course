#include<iostream>
using namespace std;   //LEARN ABOUT FUNCTION AND PARA METER AND PROTOTYPE
            //******************************//
            // int sum(int a,int b)
            // {
            //     int c;      

            //      c= a+b;  //<----------------this is function

            //      return c; 
            // }
    int sum(int ,int);   //<-------this is function prototype

int main()
{
    int a,b;
    cout<<"input first value"<<endl;
    cin>>a;
    cout<<"input second value"<<endl;
    cin>>b;
    cout<<"answer is = "<<sum(a,b);
return 0;
}

int sum(int a,int b)
            {
                int c;      

                 c= a+b;  //<----------------this is function

                 return c; 
            }