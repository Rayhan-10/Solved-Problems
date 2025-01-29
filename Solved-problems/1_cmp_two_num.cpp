#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<num1<<" is the largest";
    }
    else if(num1<num2)
    {
        cout<<num2<<" is the largest";
    }
    else
    {
        cout<<num1<<" "<<num2<<" Both number is the largest";
    }
    return 0;
}