#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k;

    for(row=1;row<=7;row++)
    {   k=7-row;
        for(coloumn=1;coloumn<=7;coloumn++)
        {   
            if (coloumn<=8-row)
            {
            cout<<k--;
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