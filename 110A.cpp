#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int ln;
    int count = 0;

    cin>>ln;
    while (ln!=0)
    {
        int a = ln % 10; // 7
        // cout<<"A IS:"<<a<<endl;
        if (a == 4 || a == 7)
        {
            count += 1;
            // cout<<"count: "<<count<<endl;
        }
            ln = ln / 10;
    }
    if(count == 4 || count == 7) cout<<"YES";
    else cout<<"NO";
    return 0;
}