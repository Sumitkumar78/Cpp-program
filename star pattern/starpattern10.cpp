#include<iostream>
using namespace std;
int main()
{
    int row ;
    int coloumn;
    int num=0;
    for(row=1;row<=7;row++)
    { if(row<=4)
        {
            num++;
        }
        else
        {
            num--;
        }
        for(coloumn=1;coloumn<=7;coloumn++)
        {   if(row<=4)

            if(coloumn>=5-num&&coloumn<=3+num)
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