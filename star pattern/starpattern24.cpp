#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k;
    for(row=1;row<=4;row++)
    {  k=64+row;
        for(coloumn=1;coloumn<=4;coloumn++)
        {    
            if (coloumn<=row)
            {
              cout<<char(k);
              k--;
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