#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    string s = "This is a new line. Is this.";
    vector<string> vec;
    s += ' ';
    int j = count(s.begin(),s.end(),' ');
    int start = 0;
    for (int i = 0; i < j; i++)
    {
        int k = s.find(' ');
        string str = s.substr(start, k);
        // cout<<str[str.length()-1];
        if(str.back() == '.'){
        s.erase(str.length()-2, 1);
        }
        vec.push_back(str);
        s.erase(start, str.length()+1);
    }
    for(auto i = vec.rbegin(); i != vec.rend(); i++){
        cout<<*i<<" ";
    }
    return 0;
}