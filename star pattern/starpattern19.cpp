 #include<iostream>
using namespace std;
int main()
{
    int row;
    int coloumn;
    char c;
    int d;
    
    for(row=1;row<=4;row++)
    {   c='A';

        for(coloumn=1;coloumn<=8;coloumn++)
        {  
            if (coloumn>=5-row &&coloumn<=4+row)
            {
               if(coloumn==5)
               cout<<'1';
               d++;

              
              cout<<c;
              c++;
             
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