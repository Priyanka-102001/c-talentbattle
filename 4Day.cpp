#include<iostream>
using namespace std;

int main()
{
int n;
    cout << "enter the no";
    cin>>n;
    
    if(n>0)
    {
    cout<<"number is positive";
    }
    else if(n==0)
    {
    cout<<"number is neither positive nor negative";
    
    }
    else
    {
    cout<<"number is negative";
    }
    return 0;
}
