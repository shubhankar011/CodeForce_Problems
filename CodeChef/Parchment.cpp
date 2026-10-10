#include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool isPossible(const vector<int>& nums, int k, int f, int maxVal) {
//     vector<bool> deleted(maxVal + 1, false);
//     int operations = 0;
//     for (int num : nums) {
//         deleted[num] = true;
//     }

//     int i = 1;
//     while (i <= maxVal) {
//         if (deleted[i]) {
//             operations++;
//             if (operations > f) return false;
//             for (int j = i; j <= min(i + k, maxVal); ++j) {
//                 deleted[j] = false;
//             }
//             i++;
//         } else {
//             i++;
//         }
//     }
//     return true;
// }

// int main() {
//     int n, a, q;
//     cin >> n >> a;

//     vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }
//     sort(nums.begin(), nums.end());

//     cin >> q;

//     for (int i = 0; i < q; ++i) {
//         int f;
//         cin >> f;

//         int low = 0, high = a, ans = a;
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (isPossible(nums, mid, f, a)) {
//                 ans = mid;
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPossible(ll mid,vector<ll> vec,ll f){
    ll operate = 1;
    ll current = vec[0];
    for (int i = 1; i < vec.size(); i++){
        if(vec[i] > current+mid){
            operate++;
            current = vec[i];
        }
    }
    
    return operate <= f;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k,q;
    cin>>n>>k;
    vector<ll> vec(n);
    for(ll i = 0; i < n; i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    cin>>q;
    for(ll i = 0; i < q; i++){
        ll f;
        cin>>f;
        
        ll mid, low = 0, high = vec.back()-vec.front(), ans = high;
        while(low <= high){
            mid = low + (high-low) / 2;
            if(isPossible(mid,vec,f)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}