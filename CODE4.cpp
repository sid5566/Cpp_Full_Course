#include<iostream>
using namespace std;
                    //LEARNING LOOPS DO WHILE,WHILE OR FOR
int main()
{
    //******************first do while loop
      int num = 1,get_val;
      cout<<"table of input value";
        cin>>get_val;
   /* do
    {
        cout<<num<<"x"<<"6 = "<<6*num<<endl;
        num++;
    } while(num<=10);
  */
 //*********************second for loop
 /*for(num;num<=10;num++)
 {
     cout<<num<<"x"<<"6 = "<<6*num<<endl;
 }*/
  while (num<=10)
  {
      cout<<get_val<<" x"<<num<<" = "<<get_val*num<<endl;
      num++;
  }
  
}