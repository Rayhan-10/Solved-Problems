#include<iostream>
using namespace std;
int main()
{
    char ar[10];
    cout<<"Enter a number : ";
    for(int i=0; ar[i] != '\0'; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; ar[i] != '\0'; i++)
    {
        cout<<ar[i];
    }
    return 0;
}