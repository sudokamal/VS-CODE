#include<iostream>
using namespace std;
int main () {
    int a,b,c,d;
    cout<<"enter 4 integers:";
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d)
    cout<<"a is greatest";
    else if(b>a && b>c && b>d)
    cout<<"b is greatest";
    else if(c>a && c>b && c>d)
    cout<<"c is greatest";
    else
    cout<<"d is greatest";
    return 0;
}