#include<iostream>
using namespace std;
int main()
{
    int sum=0, n, r, o;
    cout<<"enter the number ";
    cin>>n;
    o=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==o)
    {
        cout<<"it is armstrong ";
    }
    else
    {
        cout<<"it is not armstrong ";
    }
    return 0;
}