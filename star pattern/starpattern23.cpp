#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    for(row=1;row<=7;row++)
    {
        for(coloumn=1;coloumn<=7;coloumn++)
        {
            if (( row==1||row==7||coloumn==1||coloumn==7)||(row>=3&&row<=5&&coloumn>=3&&coloumn<=5) &&(row==3||row==5||coloumn==3||coloumn==5))
            {
              cout<<"*";
            }
            else
            {
                cout<<" ";


            }
        }
        cout<<endl;
    }
    return 0;
}