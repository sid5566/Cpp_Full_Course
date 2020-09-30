#include<iostream>
//input output header file//
using namespace std;
//std = standerd file using for input 
int main()
{
  int num_1,num_2;

  num_1 = 2 , num_2=1;                                                                    //MODULUS = %
                                                                                         //NOT EQUAL = !

  //|**** ARTHMETIC OPERATOR IN CPP*****|
  cout<<"addition of num_1 or num_2 = "<<num_1+num_2<<endl;
  cout<<"sub of num_1 or num_2 = "<<num_1-num_2<<endl;
  cout<<"div of num_1 or num_2 = "<<num_1/num_2<<endl;
  cout<<"multi of num_1 or num_2 = "<<num_1*num_2<<endl;
  cout<<"the value of num_2++ is = "<<num_2++<<endl; //first print then addition
  cout<<"the value of num_2-- is = "<<num_2--<<endl; //first print then substract
  cout<<"the value of --num_1 is = "<<--num_1<<endl; // first substract then print 
  cout<<"the value of ++num_1 is = "<<++num_1<<endl; // first addition then print 
  cout<<"modulus of num_1 and num_2 is = "<<num_1%num_2<<endl; // THE REMAINING NUMBER BY DIVISION CALLED MODULUS BY DENOTING % 

  //||COMAREISION opperator*****| 
  cout<<"\nis this correct"<<(num_1==num_2) <<endl; // num_1 ====2 ::: num_2=====1    
  cout<<"is this correct"<<(num_1!=num_2)<<endl;
  cout<<"is this correct"<<(num_1<num_2)<<endl;
  cout<<"is this correct"<<(num_1<=num_2)<<endl;
  cout<<"is this correct"<<(num_1>num_2)<<endl;
  cout<<"is this correct"<<(num_1>=num_2)<<endl;

//| LOGIC operator in **********

cout<<"\nlogic 'and' operator "<<((num_1>num_2) && (num_2<num_1))<<endl;
cout<<"logic 'or' operator "<<((num_1==num_2) || (num_2>num_1))<<endl;
cout<<"logic 'and' operator "<<(!(num_1>num_2));                      // num 1======2 ;;;;;;::::::: num 2========1




return 0;  

}