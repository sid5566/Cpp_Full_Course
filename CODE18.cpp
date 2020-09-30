#include<iostream>
#include<cstring>
using namespace std;
class EMPLO
{
private:
    int Id;
    int salary;
    string name;

public:
    void Setdata(void);
    void Getdata(void);
};
void EMPLO::Setdata()
{
    salary=20000000;
    cout <<"\nEnter your name  ::" << endl;
    cin >> name;
    cout << "Enter your id     ::" << endl;
    cin >> Id;
}

void EMPLO::Getdata()
{
    cout<<"This is your name   ::  " << name << endl;
    cout <<"This is your id    ::  " << Id << endl;
    cout<<"This is your salary ::  " <<salary<<endl;
}

int main()
{
    //  EMPLO hariom;

    //  hariom.Setdata();
    //  hariom.Getdata();

    EMPLO atom[5];  //LISTING ARRAY IN ATOM COMPANY

    for(int loop = 1; loop <3; loop++)  //RUNING THIS IN LOOP 
    {
       cout<<endl<<loop<<".";
       atom[loop].Setdata();
    }

     for(int loop = 1; loop <3; loop++)
    {
       atom[loop].Getdata();
    }

    return 0;
}