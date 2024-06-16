#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],m,n;
    cout<<"enter the number of row and columns of matrix A and B:";
    cin>>m>>n;
    cout<<"enter the elements if matrixA:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of matrix B:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"the resultant matrix of C=A+B:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    
    }
    cout<<"the resultant matrix of D=A-B:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<d[i][j]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}