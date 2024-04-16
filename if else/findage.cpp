#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age";
    cin>>age;
    if(age<=12)
    {
        cout<<"this is child";
    }
    else if(age<=19)
    {
        cout<<"this is teenagers";
    }
    else
    {
        cout<<"this is adult";
    }
    return 0;
}