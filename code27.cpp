#include <iostream>
using namespace std;
int main() {
int i,j;
i=1;
while(i<=5){//outer loop
cout<<endl<<"i="<<i<<endl;
j=1;
while(j<=10){//nested loop
cout<<"j="<<j<<" ";
j++;
}
i++;
}
return(0);
}