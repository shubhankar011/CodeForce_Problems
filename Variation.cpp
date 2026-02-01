#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,count = 0;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    int j = 0;
    for (int i = 0; i < n-1; i++){
        int x = vec[i];
        while((vec[j]-x) < k){
            j++;
        }
        if(j<n){
            count += (n-j);
        }
    }
    cout<<count<<endl;
    return 0;
}