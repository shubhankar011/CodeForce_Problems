#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin>> vec[i];
    vector<int> dp(n);
    dp[0] = vec[0];
    dp[1] = vec[1];
    dp[2] = vec[2];
    for (int i = 3; i < n; i++){
        dp[i] = vec[i] + min({dp[i-1],dp[i-2],dp[i-3]});
    }
    cout<<min({dp[n-1],dp[n-2],dp[n-3]});
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int n;
//     cin>>n;
//     vector<long long int> mini;
//     for(int i = 0; i < n; i++) cin>>mini[i];
//     vector<long long int> dp(n);
//     dp[0] = mini[0];
//     dp[1] = mini[1];
//     dp[2] = mini[2];
//     for (int i = 3; i < n; i++)
//     {
//         dp[i] = mini[i] + min({dp[i-1],dp[i-2],dp[i-3]});
//     }
//     cout<<min({dp[n-1],dp[n-2],dp[n-3]});
    
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int n;
//     cin>>n;
//     vector<long long> dp(n);
//     // vector<int> dp2(n);
//     long long int minimum = 0;
//     for (int i = 0; i < n; i++){
//         cin>>dp[i];
//     }
//     long long int i = 0;
//     while((i+2)<dp.size()){
//         int val = min({dp[i],dp[i+1],dp[i+2]});
//         minimum += val;
//         if (val == dp[i]) i++; 
//         else if (val == dp[i+1]) i = i + 2;
//         else i = i + 3;
//     }
//     cout<<minimum;
//     return 0;
// }