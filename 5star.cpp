#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,row;
     cout<<"enter the number of row:";
     cin>>row;
     for(i=0;i<=row;i--)
     {
        for(j=0;j<=i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
        }
        return 0;
}
