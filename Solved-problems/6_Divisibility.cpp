// Divisibility Test: Check whether a number is divisible by both 3 and 5.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Number : ";
    int num;
    cin>>num;
    if(num % 3 == 0 && num % 5 == 0)
    {
        cout<<num<<" divisible by both 3 & 5"<<endl;
    }
    else
    {
        cout<<num<<" not divisible by both 3 & 5"<<endl;
    }
    return 0;
}