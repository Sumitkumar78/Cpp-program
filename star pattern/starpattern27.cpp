#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    char c='A';
    int k;

    for(row=1;row<=5;row++)

    { 
        for(coloumn=1;coloumn<=5;coloumn++)
        {  k=row-1;
            if (coloumn>=6-row)
            {
              cout<<c;
             
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