#include<iostream>
using namespace std;
class dog
{
private:
    /* data */
    int age,price;
public:
    string name;
       void setdata(int age1,int price1);
       void  getdata();
};

void dog::setdata(int age1,int price1)
{
    age=age1;
    price=price1;
}
void dog::getdata()
        {
            cout<<"name of dog is =="<<name<<endl;
            cout<<"price of dog is=="<<price<<endl;
            cout<<"age of dog is  =="<<age<<endl;
        }
int main()
{
   dog Rajapalayam;
   Rajapalayam.setdata(12,2543);
   Rajapalayam.name="Rajapalayam";
   Rajapalayam.getdata();
return 0;
}