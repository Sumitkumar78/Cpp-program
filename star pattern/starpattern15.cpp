#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    for(row=0;row<=7;row++)
    {
        for(coloumn=0;coloumn<=7;coloumn++)
        {
            if (coloumn==row||coloumn==8-row)
            {
             if (row==coloumn||row==8-coloumn)
             {
               cout<<"/";
             }
             else
             {
                cout<<"\\";
             }

             }

              else
            {
                cout<<"*";


            }
        }

        cout<<endl;
    }
 return 0;
    }
  