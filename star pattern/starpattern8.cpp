#include<iostream>
using namespace std;
int main()
{
    int row ;
    int coloumn;
    int num;
    for(row=1;row<=4;row++ ){
        num=1;
        for(coloumn=1;coloumn<=7;coloumn++)
        {  
            if(coloumn>=5-row&&coloumn<=3+row)
            {
                cout<<num;
               
                if(coloumn>=4)
                {
                    num--;
                }
                else{
                    num++;
                }
                
            }
            else{
                cout<<" ";
               
               
            }
        }
        cout<<endl;

    }
    return 0;
}