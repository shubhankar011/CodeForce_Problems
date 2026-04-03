#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        vector<int> vec(n);
        for (int j = 0; j < n; j++){
            cin>>vec[j];
        }
        next_permutation(vec.begin(),vec.end());
        for(auto c:vec){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}