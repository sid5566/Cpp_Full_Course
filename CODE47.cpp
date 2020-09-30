#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
    string Reading_Files;
    ifstream Read("CODE47O.txt");
           // Read>>Reading_Files;
    getline(Read,Reading_Files);
    cout<<Reading_Files;
    

return 0;
}