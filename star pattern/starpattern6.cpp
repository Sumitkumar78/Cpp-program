#include<iostream>
using namespace std;
int main()
{
    int row,coloumn,flag;
    for(row=1;row<=5;row++)
    { flag=1;
        for(coloumn=1;coloumn<=9;coloumn++)
        { 
            if(coloumn>=6-row&&coloumn<=4+row&&flag)
            {
              cout<<"*";
              flag=0;


            }
            else
            {
                cout<<" ";
                flag=1;


            }
           

        }
        cout<<endl;
    }
    return 0;
}