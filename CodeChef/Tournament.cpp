#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m, revenue = 0;
    cin>>n;
    vector<long long int> vec(n);
    m = (n*(n-2))/2;
    for(int i = 0; i < n; i++) vec[i];  
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; i++){
        revenue += vec[i]*(2*i-n+1);
    }
    cout<<revenue;
    return 0;
}