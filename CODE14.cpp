#include<iostream>                  //LEARNING ABOUT CLASS,OBJECT AND FUNCTION
using namespace std;                // :: <--------------THIS IS SCOPE RESOLUTION
     class student
     {
     private:
         /* data */
         int marks,age_s,father_in;
     public:
            int mob_no,roll_no;

         void students(int mark1,int age,int father);

         void  pstudent()
         {
             cout<<"student roll no is = "<<roll_no<<endl;
             cout<<"student mob_no is = "<<mob_no<<endl;
             cout<<"student age  is = "<<age_s<<endl;
             cout<<"student marks is = "<<marks<<endl;
             cout<<"student father_in is = "<<father_in<<endl;
         }

         
     };
     void student::students(int mark1,int age,int father)
     {
         marks=mark1;
         age_s=age;
         father_in=father;
     }
int main()
{
    student hariom;
             hariom.roll_no=50;
             hariom.mob_no=534;
      hariom.students(100,18,10000);
      hariom.pstudent();
    student yash;
      yash.students(100,18,10000);
            yash.roll_no=50;
            yash.mob_no=534;
      yash.pstudent();
return 0;
}