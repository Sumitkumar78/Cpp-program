#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    for(row=0;row<=5;row++)
    {
        for(coloumn=0;coloumn<=5;coloumn++)
        {
            if (coloumn>=row)
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