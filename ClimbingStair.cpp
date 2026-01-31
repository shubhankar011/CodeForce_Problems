#include<bits/stdc++.h>
using namespace std;
int count(int i, int n, vector<int> &dp){
    if (i == n){
        return 1;
    }
    if(i > n){
        return 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    return dp[i] =  count(i+2,n,dp)+count(i+1,n,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+2,-1);
    cout<<count(0,n,dp);
    return 0;
}