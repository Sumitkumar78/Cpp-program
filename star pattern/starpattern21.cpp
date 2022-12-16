#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k;
    char c;
    for(row=1;row<=4;row++)
    { k=1;
        for(coloumn=1;coloumn<=7;coloumn++)
        { 
            if (coloumn>=5-row&&coloumn<=3+row)
            {  
               
              cout<<k;
              k++;
              if(coloumn==64)
              char c='c';
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