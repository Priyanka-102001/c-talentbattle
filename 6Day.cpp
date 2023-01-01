#include<iostream>
using namespace std;

int main()
{
int x, y;
    cout << "enter x coordinate";
    cin>>x;
    cout<<"enter y coordinates";
    cin>>y;
    
    if(x>0 && y>0)
    {
    cout<<"point is in 1 quadrant";
    }
   else if(x<0 && y>0)
    {
    cout<<"point is in 2 quadrant";
    }
    else if(x<0 && y<0)
    {
    cout<<"point is in 3 quadrant";
    }
    else if(x>0 && y<0)
    {
    cout<<"point is in 4 quadrant";
    }
    return 0;
}
