#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k;
    for(row=1;row<=4;row++)
    {  k=row;
        for(coloumn=1;coloumn<=7;coloumn++)
        { 
            if (coloumn>=5-row&&coloumn<=3+row)
            {   
              cout<<k;
              coloumn<4?k--:k++;
           
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