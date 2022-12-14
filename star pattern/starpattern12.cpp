#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k;

    for(row=0;row<=4;row++)
    { k=row;
        for(coloumn=0;coloumn<=7;coloumn++)
        {
            if (coloumn>=5-row&&coloumn<=3+row)
            { 
                if(coloumn>=4)
                 cout<<k--;
                 else
                 cout<<k++;
            
            
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