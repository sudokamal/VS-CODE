#include<bits/stdc++.h>
using namespace std;
int main(){
    int roll;
    char name[20];
    char section[20];
    cout<<"enter your roll no.: ";
      cin>>roll;;
    cout<<"enter your name :";
    cin.ignore();

    cin.getline(name, 20);
    cout<<"enter your section:";
    cin.ignore();
    cin.getline(section, 20);

    cout<<"your roll no. is :"<<roll<<endl;
    cout<<"your name is :"<<name<<endl;
    cout<<"your section is :"<<section<<endl;
    return(0);
}