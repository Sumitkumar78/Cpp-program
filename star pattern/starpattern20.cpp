#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    for(row=1;row<=4;row++)
    {
        for(coloumn=1;coloumn<=8;coloumn++)
        {
            if (coloumn>=5-row&&coloumn<=9-row)
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