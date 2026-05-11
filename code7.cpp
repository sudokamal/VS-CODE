#include<iostream>
using namespace std;
int main(){
int a,b,max;
cout<<"enter two integers:";
cin>>a>>b;
if(a>b)
max=a;
else
max=b;
cout<<"max of\n"<<a<<"\nand"<<b<<"is\n"<<max;
return 0;
}
