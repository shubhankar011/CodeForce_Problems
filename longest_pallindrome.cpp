#include <bits/stdc++.h>
using namespace std;
int indices(int* j, int* k, string s){
    int init = *j;
    while(*j < *k && s[*j] == s[*k]){
        (*j)++;
        (*k)--;
    }
}
int main() {
    int n, max = 0;
    bool flag = false;
    string str,longest;
    cin>>n;
    cin>>str;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int p = i;
            int k = j;
            indices(&p, &k, str);
            if(p>=k){
                if(j - i + 1 > max){
                    flag = true;
                    longest = str.substr(i,j - i + 1);
                    max = j - i + 1;
                }
            }
        }
        
    }
    if(flag){
        // cout<<"yes"<<endl;
        cout<<longest.length()<<endl<<longest;
    }
    else{
        cout<<"no";
    }
    
}