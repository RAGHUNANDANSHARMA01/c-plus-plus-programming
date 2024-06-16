#include<iostream>
using namespace std;
int main()
{
    int x,y;
     int *ptrx=&x;
    int * ptry=&y;
    cin>>x>>y;
    int result;
    int *ptrresult=&result;
    *ptrresult=*ptrx + *ptry;
    cout<<"the addition of pointer:"<<*ptrresult;
    return 0;
}