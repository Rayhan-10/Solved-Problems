#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter Two number: ";
    cin>>num1>>num2;
     //Using Xor 
     num1 = num1 ^ num2;
     num2 = num1 ^ num2;
     num1 = num1 ^ num2;

     cout<<"After swappning: \n Num1 = "<<num1<<"\n Num2= "<<num2;

    return 0;
}