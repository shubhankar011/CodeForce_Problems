#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int j,k;
    string s1,s2;

    cin>>s1;
    cin>>s2;

    transform(s1.begin(), s1.end(), s1.begin(),[](unsigned char c){ return static_cast<char>(tolower(c)); });
    transform(s2.begin(), s2.end(), s2.begin(),[](unsigned char c){ return static_cast<char>(tolower(c)); });
    
    // cout<<s1<<" "<<s2;
    if(s1==s2){
            cout<<0;
    }
    else{
        for (int i = 0; i < s1.length(); i++)
        {
            j = s1[i];
            k = s2[i];
            // cout<<j<<" "<<k<<endl;
            if(j < k){
                cout<<-1;
                break;
            }
            else if(j>k){
                cout<<1;
                break;
            }
        }
    }
    return 0;
}