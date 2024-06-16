#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10][10],b[10][10],c[10][10],d[10][10],n,m;
    cout<<"\nenter the number of row and number of column  of A and B:";
    cin>>n>>m;
    cout<<"\nenter the element of matrix in A:";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the element matrix in B:";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"\nTheresultant the matrix c=A+B is:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n Theresultant the matrix d=A-B:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<"\n";
}
}