#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter three number: ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1 >num3) 
    {
        cout<<num1<<" is the largest";
    }
    else if(num1<num2 && num3<num2)
    {
        cout<<num2<<" is the largest";
    }
    else if (num1<num3 && num2<num3)
    {
        cout<<num3<<" is the largest";
    }
    else
    {
        cout<<"All three number are same";
    }

    return 0;
}