#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter the value of a ,b,c,d";
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d)
    {
        cout<<"a is greater than b,c,d";
    }
else if(b>a && b>c && b>d)
    {
        cout<<"b is greater than a,c,d";
    }
else if(c>a && c>b && c>d)
    {
        cout<<"c is greater than a,b,d";
    }
else
    {
        cout<<"d is greater than a,b,c";
    }
    return 0;
}