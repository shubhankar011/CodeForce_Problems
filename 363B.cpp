#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    vector<long long> vec(n);
    for(int i = 0; i < n; i++) cin>>vec[i];
    long long csum = 0;
    for(long long i = 0; i < k; i++) csum += vec[i];
    long long maxi = csum, best_index = 1;
    for (long long i = k; i < n; i++){
        csum = vec[i] - vec[i-k];
        if(csum < maxi){
            maxi = csum;
            best_index = i - k +2;
        }
    }
    cout<<best_index;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,k;
//     cin>>n>>k;
//     vector<long long> vec(n);
//     for(long long i = 0; i < n; i++) cin>>vec[i];
//     long long min = INT_MAX;
//     long long sum = 0;
//     long long best_index;
//     int i = 0;
//     while(i < k){
//         sum += vec[i]; 
//         i++;
//     }
//     for (i = k; i < n; i++){
//         sum += vec[i] - vec[i-k];
//         if(min > sum){
//             min = sum; 
//             best_index = i-k+2;
//         }
//     }
//     cout<<best_index;
//     return 0;
// }
// // 1 2 6 1 1 7 1
// // 1+2+6,