#include<bits/stdc++.h>
using namespace std;

    void nextGreater(vector<int> a, vector<int>&res){
      stack <int> s1;
      for(int i = a.size()-1; i>=0; i--){
        while(!s1.empty() && s1.top()<=a[i]){
          s1.pop();
        }
        if(!s1.empty()){
          res[i] = s1.top();
        }
        s1.push(a[i]);
      }

    }
    int main(){
        vector<int> a = {5,4,7,6,4,8};
        vector<int> res(a.size(), -1);
        nextGreater(a, res);
        for (int e : res){
          cout << e << " ";
        }
        return 0;   
    }