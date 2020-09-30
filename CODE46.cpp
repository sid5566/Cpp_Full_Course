#include<iostream>
#include<fstream>
using namespace std;

int main()
{
// ofstream <----IS USING FOR WRITEING FILE.
string Open_files= "THIS IS WRITING FILE";
ofstream Open("CODE46R.txt");
Open<<Open_files;
//WRITE Open_Files in Open  by <<
return 0;
}