#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    long long seq = 0;
    int l = 0, r = n-1;
    while(l < r){
        if(vec[l]+vec[r] < k){
            seq += r-l;
            l++;
        }
        else r--;
    }
    cout<<seq;
    return 0;
}
// 0 1 1 3 5 5 10
// 4
// 0,1 0,1 0,3 1,1
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,k;
//     cin>>n>>k;
//     vector<int> vec(n);
//     for(int i = 0; i < n; i++) cin>>vec[i];
//     sort(vec.begin(),vec.end());
//     for(auto c:vec) cout<<c<<" ";
//     cout<<endl;
//     long long seq = 0;
//     for (int i = 0; i < n; i++){
//         int j = k - vec[i];
//         if(j < 0) break;
//         auto it = lower_bound(vec.begin(),vec.end(),j);
//         int pos = distance(vec.begin(),it);
//         if(it != vec.begin() && pos > i+1){
//             seq += pos - 1 - i;
//         }
//     }
//     cout<<"\n"<<seq;
//     return 0;
// }