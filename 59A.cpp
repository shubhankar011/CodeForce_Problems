#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    int count = 0,j;
    cin>>s1;
    
    for (int i = 0; i < s1.length(); i++)
    {
        j = s1[i];
        if(j <= 91 && j >= 65){
            count++;
        }
    }
    if(count > (s1.length() - count)){
        transform(s1.begin(), s1.end(), s1.begin(),[](unsigned char c){ return static_cast<char>(toupper(c)); });
    }
    else{
        transform(s1.begin(), s1.end(), s1.begin(),[](unsigned char c){ return static_cast<char>(tolower(c)); });
    }
    cout<<s1;
    return 0;
}