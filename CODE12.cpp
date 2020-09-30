
                          // #include<iostream> 
                            // using namespace std;            //LEARNING RECURSION 
                            // int fact(int a)                //RECURSION MEANING WHEN VALUE SATISFY 0 OR 1 IN DECRIMENT ORDER 
                            // {                               //CALL RECURTION EX-9,8,7,6,5,4,3,2,1 THIS IS RECURSION
                            //     switch (a)
                            //     {
                            //     case 1:
                            //         /* code */
                            //         return 1;
                            //         break;
                                
                            //     default:
                            //         break;
                            //     }
                                
                            //     return a *fact(a-1);
                            // }
                            // int main()
                            // {
                            //    int a =4;
                            //    cout<<fact(a);
                            // return 0;
                            // }
#include<iostream>
using namespace std;

void fact(int);
                 //     FACTORIAL WITH ALL NUMBER
int main()
{
    int fact_in;
    cout<<"enter an number"<<endl<<"=";
    cin>>fact_in;
    fact(fact_in);
return 0;
}
void fact(int fact_in)
{
    int pno_in=1;      //??I NEED TO GIVE A NUMBER                    // int i=a;
    for (fact_in; fact_in>1; fact_in--)
    {
        /* code */
         cout<<fact_in<<" * ";
         pno_in=pno_in*fact_in;
    } 
    cout<<1<<"="<<pno_in;
} 