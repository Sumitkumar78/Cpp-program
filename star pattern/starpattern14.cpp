#include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    int k=0;
    int x;
   
    for(row=1;row<=9;row++)
    {  row<6?k++:k--;
    x=1;
      
        for(coloumn=1;coloumn<=5;coloumn++)
        { 
            if (coloumn>=6-k)
            { 
               cout<<x;
               x++;
            
                
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