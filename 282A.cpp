#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<string> v;
    string s;
    int x = 0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>s;
        v.push_back(s);
    }
    for(auto c : v){
        c.erase(remove(c.begin(),c.end(),'x'),c.end());
        if(c[0] == '+'){
            ++x;
        }
        else{
            --x;
        }
    }
    cout<<x;
    return 0;
}