#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m = INT_MIN, i = 0;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(auto c : vec){
        if(c*(n-i) > m){
            m = c*(n-i);
        }
        i++;
    }
    cout<<m;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long cmax = 0,max_rev = 0;
//     int n,c;
//     cin>>n;
//     vector<long long> vec;
//     for(auto i = 0; i < n; i++){
//         cin>>c;
//         vec.push_back(c);
//     }
//     sort(vec.begin(),vec.end());
//     for(auto i = 0; i < n; i++){
//         cmax = (vec[i])*(n-i);
//         if(max_rev < cmax){
//             max_rev = cmax;
//         }
//     }
//     cout<<max_rev;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int max_rev = INT_MIN, cmax = 0;
//     int n,count = 0;
//     cin>>n;
//     int arr[n];
//     for(auto i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if(arr[i] <= arr[j]){
//                 count++;
//             }
//         }
//         cmax = arr[i]*count;
//         if(max_rev < cmax){
//                 max_rev = cmax;
//         }
//     }
//     cout<<max_rev;
//     return 0;
// }
