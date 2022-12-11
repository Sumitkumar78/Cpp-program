#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    for (row = 0; row <6; row++)
    {
        for (coloumn  = 0; coloumn <6; coloumn++)
        {
        if(row>=6-coloumn)
        cout<<"*";
        else
        cout<<" ";
        
        }
        cout<<endl;
    }

      
    
    
    
  

    return 0;
}