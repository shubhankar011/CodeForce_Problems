#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m, revenue = 0;
    cin>>n;
    vector<long long int> vec(n);
    m = (n*(n-2))/2;
    for(int i = 0; i < n; i++) vec[i];  
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n-1; i++){
        for(int j = i; j < n; j++){
            revenue += (vec[j] - vec[i]);
        }
    }
    cout<<revenue;
    return 0;
}