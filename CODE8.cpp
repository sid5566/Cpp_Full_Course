#include<iostream>
 using namespace std;                                 //<--------------LEARN ABOUT STRUCT UNION AND ENUM

// typedef struct student //<---------------TYPEDEF IS USE TO CONSTRUCT THE (ST)m given below
// {
//     /* data */
//     int ID;
//     float Ratio_n;
// }ST;         //<------------USE FOR COMPRESE THE BIG NAME WHICH IS GUVUN UPWORD

 typedef union memo
{
    /* data */
    int M;      //|
    char N;     //|<****************UNION SHARE THE MEMORY BETWEEN ALL OF THREE SO THAT WE WILL PRINT ONLY ONE THINK AT ONE TIME          
    float T;     //
}MO;

int main()
{
    // ST hariom;                   
    // hariom.ID = 21;           <----------------YES WE CAN WRITE FULL STRUCT STUDENT HARIOM AND SIMPAL STUDENT HAR
    // hariom.Ratio_n = 32.56;

    // ST yash;
    // yash.ID = 22;
    // yash.Ratio_n=32.45;

    // cout<<"hariom ID is = "<<hariom.ID<<endl;
    // cout<<"hariom ID is = "<<hariom.Ratio_n<<endl;

    // cout<<"yash ID is = "<<yash.ID<<endl;
    // cout<<"yash ID is = "<<yash.Ratio_n<<endl;

                // union memo sos;
                // sos.N= '3';
                //             /* sos.M=21;
                //             sos.T=21.23;
                //             */

                // cout<<sos.N<<endl;
        
                                                enum name{hariom, yash, sannu };

                                                name sos =hariom;
                                                cout<<sos<<endl;

                                                name sod=yash;
                                                cout<<sod<<endl;

                                                name sof=sannu;
                                                cout<<sof<<endl;

                                                system("pause");  

return 0;
}