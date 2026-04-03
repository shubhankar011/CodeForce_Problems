#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int> dp(n);
    vector<long long> vec(100005,0);
    vector<long long int> freq(100005,0);
    long long int m = -1;
    for (int i = 0; i < n; i++){
        cin>>dp[i];
        freq[dp[i]]++;
        m = max(m, dp[i]);
    }
    vec[0] = 0;
    vec[1] = freq[1];
    for (int i = 2; i <= m; i++)
    {
        vec[i] = max(vec[i-1],vec[i-2]+freq[i]*i);
    }
    cout<<vec[m];
    return 0;
}