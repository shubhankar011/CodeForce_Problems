#include<bits/stdc++.h>
using namespace std;
int main(){
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char pos;
    int index_pos;
    string str;
    cin>>pos;
    cin>>str;
    if(pos == 'R'){
        for (int i = 0; i < str.length(); i++)
        {
            index_pos = keys.find(str[i]);
            str[i] = keys[index_pos-1]; 
        }
    }
    else{
        for (int i = 0; i < str.length(); i++)
        {
            index_pos = keys.find(str[i]);
            str[i] = keys[index_pos+1]; 
        }
    }
    cout<<str;
    return 0;
}