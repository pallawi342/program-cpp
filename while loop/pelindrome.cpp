#include<iostream>
using namespace std;
int main()
{
    int n, rev=0, o, r;
    cout<<"enter the number ";
    cin>>n;
    o=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(o==rev)
    {
        cout<<"it is pelindrome";
    }
    else
    {
        cout<<"it is not pelindrome";
    }
    return 0;
}