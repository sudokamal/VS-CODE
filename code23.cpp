#include<bits/stdc++.h>
using namespace std;
int main(){
    int roll;
    char name[20];
    cout<<"enter your roll no.: ";
      cin>>roll;;
    cout<<"enter your name :";
    cin.ignore();
    cin.getline(name, 20);
  
    cout<<"your roll no. is :"<<roll<<endl;
    cout<<"your name is :"<<name<<endl;
    return(0);
};