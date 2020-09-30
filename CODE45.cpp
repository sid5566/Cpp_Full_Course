#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "this is";
    ofstream cont("CODE45.txt");
    cont<<s1;  
return 0;
}