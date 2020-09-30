#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    // ofstream Open,pr; //<----include a class AND  create a object
    // Open.open("CODE49.txt"); //<----- by object call the open function
    // pr.open("CODE49TR.txt");
    // Open<<"hello world hello Open "; //<---in open write the string 
    // pr<<"hello world hello  pr ";
    // pr.close();
    // Open.close();


    ifstream read;
    string srt;
    read.open("CODE49.txt");
    while (read.eof()==0)
    {
        /* code */
        getline(read,srt);
        cout<<srt<<endl;
    }
    read.close();
    
    
return 0;
}