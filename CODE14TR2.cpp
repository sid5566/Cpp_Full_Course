#include<iostream>
using namespace std;
class dog
{
private:
    /* data */
    int age;
    int price;
public:

    string name; 

   void setdata(int ageD,int priceD);
    void getdata()
    {   
        cout<<"name of dog is  :: "<<name<<endl;
        cout<<"age of dog is   :: "<<age<<endl;
        cout<<"price of dog is :: "<<price<<"$"<<endl;
    }
};

void dog::setdata(int ageD,int priceD)
{
    age=ageD;
    price=priceD;
}
int main()
{
 dog Rajapalayam;
 Rajapalayam.setdata(14,2344);
 Rajapalayam.name="Rajapalayam";
 Rajapalayam.getdata();
return 0;
}