#include<iostream>
#include<string>
using namespace std;
class animals
{
private:
    string names;
public:
    void animal_name(string name1);
    string age;
    void getdata()
    {
        cout<<"age of a animal is = "<<age;

    }
};

void animals::animal_name(string name1)
{
  names=name1;
}

int main()
{
    animals dogs;
    dogs.animal_name("lauv");
    dogs.getdata();
return 0;
}