#include<iostream>
using namespace std;

int main()
{
int m, y;
    cout << "enter the month";
    cin>>m;
    cout<<"enter the year";
    cin>>y;
    
    if(m==1||m==3||m==5||m==7||m==10||m==12)
    {
    printf("31days");
    
    }
    else if(m==4||m==6||m==8||m==9||m==11)
    {
    printf("30days");
    }
    else if(m==2 && y%4==0)
    {
    printf("29 days");
    }
    else if(m==2)
    {
    printf("28 days");
    }
    return 0;
}
