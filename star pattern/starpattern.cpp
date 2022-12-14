#include<iostream>
using namespace std;
int main()
{
    int row ;
    int coloumn;
    for(row=1;row<=3;row++)
    {
        for(coloumn=1;coloumn<=5;coloumn++)
        {
            if(coloumn>=4-row&&coloumn<=2+row)
            {
              cout<<"*";
            }
            else{
                cout<<" ";

            }

        }
        cout<<endl;
    }
   for(row=1;row<=4;row++)
    {
        for(coloumn=1;coloumn<=7;coloumn++)
        {
            if(coloumn>=row&&coloumn<=8-row)
            {
              cout<<"*";
            }
            else{
                cout<<" ";

            }

        }

        cout<<endl;
    }
    return 0;
}