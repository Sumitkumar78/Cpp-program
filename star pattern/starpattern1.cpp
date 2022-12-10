#include<iostream>
using namespace std;
int main()
{
    int index;
    int indexx;
    for (index=0; index <12; index++)
    {
      for (indexx = 0; indexx <5; indexx++)
    {
        
    if (indexx<=index)
    {
         cout<<"*";
    }
    
    cout<<" ";
    }
    cout<<endl;
    
    }
    return 0;
    
}