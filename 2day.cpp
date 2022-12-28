#include<iostream>
using namespace std;

int main()
{
char ch;
    cout << "enter character";
    cin >>&ch;
    if((ch>='a' && ch<='z')||( ch>= 'A' && ch <= 'Z'))
    {
    cout<<" character"<<ch;
    
    }
    else
    {
    cout<<"not a character";
    }
    return 0;
}
