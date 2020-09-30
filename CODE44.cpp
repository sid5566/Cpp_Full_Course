#include <iostream> //LEARNIG I/O FILES
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    string s1;

    ifstream /*this_is_full_code*/ openF("CODE44TR.txt");
    //  ^                                      ^
    //  output_of_predefine                   container_name
    openF >> s;
    cout << s<<endl;

    ifstream /*this_is_full_code*/ openF2("CODE44TR1.txt");
    //  ^                                      ^
    //  output_of_predefine                   container_name
    getline(openF2 , s1);  //<----IF WE NEED TO PRINT WHOLE STRING OF ONE LINE WHEN EVER LINE INCREASE SO GETLINE FUNCTION ADDED
    openF2 >> s1;
    cout << s1<<endl;
    return 0;
}