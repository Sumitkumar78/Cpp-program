#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    for(row=1;row<=5;row++)
    {
        for(coloumn=1;coloumn<=9;coloumn++)
        {
            if (coloumn>=row&&coloumn<=10-row)
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