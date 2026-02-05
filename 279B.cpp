#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin>>vec[i];
    int maxi = 0, current = 0, left = 0;
    for (int i = 0; i < n; i++){
        current += vec[i];
        if(current > t) {
            current -= vec[left];
            left++;
            continue;
        }
        maxi = max(maxi, i-left+1);
    }
    cout<<maxi<<endl;
    return 0;
}
// 4 5
// 3 1 2 1
// 3 > 5 = No
// 4 > 5 = No
// 6 > 5 = Yes -- 6 - 3
// 4 > 5 = No
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,t;
//     cin>>n>>t;
//     vector<long long> vec(n);
//     for (long long i = 0; i < n; i++)
//         cin>>vec[i];
//     long long sum = 0,count = 0;
//     long long i = 0;
//     for (long long right = 0; right < n; right++){
//         sum += vec[right];
//         while(sum > t){
//             sum -= vec[i];
//             i++;
//         }
//         count = max(count, right - i + 1);
//     }
    
//     cout<<count;
//     return 0;
// }