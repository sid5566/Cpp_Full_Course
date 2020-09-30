#include<iostream>
using namespace std;
class employs
{
private:
    /* data */
    int salaries;
public:
    int DOB;                    // int DOB; <----------public data here 
    void pridata(int salary);   //void pridata(int salaries);  <----function prototype here

    void pubdata()
    {                //<-------we SHOULD give function in VOID not int, float this is cout data function
    cout<<"data of birth is "<<DOB<<endl;
    cout<<"your salary is "<<salaries<<endl;
    }

};

void employs::pridata(int salary)    //<------------this is function in which we give private data prototype in uper
{
    salaries=salary;
}
int main()
{
    employs hariom;
    hariom.DOB=18;
    hariom.pridata(100000);
    hariom.pubdata();
    
return 0;
}