#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n;
    cin>>t;
    // cout<<endl;
    cin>>s;
    int i = 0;
    for (int i = 0; i < t; i++)
    {
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='B' && s[i+1] == 'G'){
                swap(s[i+1],s[i]);
                i++;
            }
        }
    }
    
    cout<<s;
}