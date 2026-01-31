#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int> mini(n);
    for(int i = 0; i < n; i++) cin>>mini[i];
    vector<long long int> dp(n);
    dp[0] = mini[0];
    dp[1] = mini[1];
    dp[2] = mini[2];
    for (int i = 3; i < n; i++)
    {
        dp[i] = mini[i] + min({dp[i-1],dp[i-2],dp[i-3]});
    }
    cout<<min({dp[n-1],dp[n-2],dp[n-3]});
    
    return 0;
}
