#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"value of a: ";
    cin>>a;
    cout<<"value of b: ";
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;
    return 0;
}