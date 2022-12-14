#include<iostream>
using namespace std;
int main()
{
    int row ;
    int coloumn;
    int k ;
    for(row=1;row<=4;row++)
    {
        for(coloumn=1;coloumn<=4;coloumn++)
        {     
            if(coloumn<=row)
            {
              cout<<"*";
            }
            else{
                cout<<" ";

            }

        }
        cout<<endl;
    }

     for(row=1;row<=3;row++)
    {
        for(coloumn=1;coloumn<=3;coloumn++)
        {   
            if(coloumn<=4-row)
            { 
              cout<<"*";
             
            }
            else{
                cout<<" ";

            }
        }

    
        cout<<endl;
    }

    
    return 0;
}