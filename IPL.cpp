#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin>>vec[i];
    vector<int> dp(n);
    dp[0] = vec[0];
    dp[1] = vec[1]+vec[0];
    dp[2] = max({vec[2]+vec[1],vec[2]+vec[0],vec[0]+vec[1]});  
    for(int i = 3; i < n; i++){
        dp[i] = max({
            dp[i-1],
            dp[i-2]+vec[i],
            dp[i-3]+vec[i-1]+vec[i]
        });
    }
    cout<<dp[n-1];
    return 0;
}