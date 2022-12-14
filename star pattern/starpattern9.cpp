#include<iostream>
using namespace std;
int main()
{
    int row ;
    int coloumn;
    char alpha;
    for(row=1;row<=4;row++ ){
        alpha='A';
        for(coloumn=1;coloumn<=7;coloumn++)
        {
            if(coloumn<=5-row||coloumn>=3+row)
            {
            
              if(coloumn<4)
              {
                cout<<alpha++;
              } 
              else{
                cout<<alpha--;
                  }
               
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