#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k=0;
    int x=1;
    for(row=1;row<=5;row++)
    {  k++;
        for(coloumn=1;coloumn<=9;coloumn++)
        {   
            if (coloumn<row+k)
            {  
                if(coloumn%2==0)
                cout<<"*";
                else 
                cout<<x;
                
               
                 
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