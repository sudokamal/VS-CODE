#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter float percentage:";
    cin>>n;
    if(n>=90)
    cout<<"grade A";
    else if (n>=70 && n<90)
    cout<<"grade B";
    else if (n>=50 && n<70)
    cout<<"grade C";
    else
    cout<<"grade F";
    return 0;
}