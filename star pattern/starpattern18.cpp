#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    char c;
    for(row=1;row<=4;row++)
    {    c='A';
        for(coloumn=1;coloumn<=7;coloumn++)
        {  
            if (coloumn>=5-row &&coloumn<=3+row)
            {
               
              cout<<c;
            coloumn<4?c++:c--;
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