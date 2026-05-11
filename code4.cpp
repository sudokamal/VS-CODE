#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter 4 integers:";
    cin>>a>>b>>c>>d;
    
    a=a+b+c+d;
    d=a-b-c-d;
    c=a-b-c-d;
    b=a-b-c-d;
    a=a-b-c-d;
    cout<<"a="<<a<<"\nb="<<b<<"\nc="<<c<<"\nd="<<d;
    return 0;
}