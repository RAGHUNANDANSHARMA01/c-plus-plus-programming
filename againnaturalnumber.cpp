#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    int sum=0;
    cout<<"enter the n number:"<<endl;
    cin>>n;
    while(i<=n)
    {
        sum+=i;
        i++;
        cout<<"Natural number is:"<<sum<<endl;
    }
    return 0;
}

