#include<iostream>
using namespace std;
int main()
{
    int r, area, cir;
    cout<<"enter the value of r ";
    cin>>r;
    area=3.14*r*r;
    cir=2*3.14*r;
    if(area<cir)
    {
        cout<<"area is smaller than cir";
    }
    else if(area>cir)
    {
        cout<<"area is greater than cir";
    }
    else
    {
        cout<<"area is equal to cir";
    }
    return 0;
}