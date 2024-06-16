#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter num and its pow:";
    cin>>a>>b;
    int result=1;
    for(int i=1;i<=a;i++)
    {
        result=result*b;
        cout<<"The raise of Two number:"<<result<<endl;
    }
    return 0;
}