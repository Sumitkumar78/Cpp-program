#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    for(row=1;row<=6;row++)
    {
        for(coloumn=1;coloumn<=6;coloumn++)
        { 

            if (coloumn<=row)
            {
                if(coloumn%2==0)
                cout<<0;
                else
              cout<<"1";
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