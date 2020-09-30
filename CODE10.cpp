#include<iostream>
using namespace std;
                        //LEARNLING ABOUT SWAP OF VALUE Call by Value & Call by Reference

        // void nosw(int a,int b)
        // {
        //     int c=a;
        //     a=b;     <---------------THIS IS A TIPICAL METHOD OF SWAPING VALUE NO.1
        //     b=c;
        //     cout<<"this is value of a = "<<a<<endl;
        //     cout<<"  this is value of b = "<<b<<endl;
        // }
          //***********    // void no1sw(int* a,int* b)
                            // {
                            //     int c=*a;
                            //     *a=*b;  //<------------Call by VALUE NO.2
                            //     *b=c;
                            // }
int main()
{
         int a =44,b=55;
                 // nosw(a,b);  <----------------THIS IS VALUE OF N0.1

                // no1sw(&a,&b);    //THIS IS CALL BY Call by VALUE NO.2

                // cout<<"this is value of a = "<<a<<endl;  
                // cout<<"this is value of b = "<<b<<endl;
        
}
