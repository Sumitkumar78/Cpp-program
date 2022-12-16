#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k=0;
    for(row=1;row<=9;row++)
    {    row<=5?k++:k--;
        for(coloumn=1;coloumn<=9;coloumn++)
        {    
            if (coloumn<=6-k||coloumn>=4+k)
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