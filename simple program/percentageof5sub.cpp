#include<iostream>
using namespace std;
int main()
{
    int hindi, english, maths, science, arts;
    cout<<"marks of hindi: ";
    cin>>hindi;
    cout<<"marks of english: ";
    cin>>english;
    cout<<"marks of maths: ";
    cin>>maths;
    cout<<"marks of science: ";
    cin>>science;
    cout<<"marks of arts: ";
    cin>>arts;
    float percentage;
    percentage=((hindi+english+maths+science+arts)*100)/500;
    cout<<"percentage of student: "<<percentage;
    return 0;
}