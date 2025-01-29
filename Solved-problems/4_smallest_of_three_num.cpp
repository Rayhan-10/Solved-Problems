#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter three number: ";
    cin>>num1>>num2>>num3;
    if(num1<num2 && num1<num3) 
    {
        cout<<num1<<" is the smallest";
    }
    else if(num2<num1 && num2<num3)
    {
        cout<<num2<<" is the smallest";
    }
    else if (num3<num1 && num3<num2)
    {
        cout<<num3<<" is the smallest";
    }
    else if(num2<num1 && num3<num1 && num2==num3)
    {
        cout<<num2<<" "<<num3<<" both are smallest";
    }
    else if(num1<num2 && num3<<num2 && num1==num3)
    {
        cout<<num1<<" "<<num3<<" both are smallest";
    }
    else if(num1<num3 && num2<num3 && num1==num2)
    {
        cout<<num1<<" "<<num2<<" both are smallest";
    }
    else
    {
        cout<<"All three number are same";
    }
    
    return 0;
}