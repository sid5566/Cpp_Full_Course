#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
string st;
cout<<"enter your name ::" <<endl;
cin>>st;
    ofstream Write("CODE48.txt");
                                                     // Write<<"this is your name "+st;
    Write<<st;

    cout<<"this is your name  "<<st<<endl;

    Write.close();

    string str;
    ifstream Read("CODE48.txt");
    Read>>str;
    cout<<str;
return 0;
}