#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    vector<vector<int>> store;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        nums.push_back(j);
    }
    sort(nums.begin(),nums.end());
    
    for(int i = 0; i < n - 2; i++){
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int left = i+1;
        int right = n-1;

        while(left < right){
            int csum = nums[i]+nums[left]+nums[right];
            if(csum == 0){
                store.push_back({nums[i],nums[left],nums[right]});
                while(left < right && nums[left] == nums[left+1]) left++;
                while(left < right && nums[right] == nums[right-1]) right--;
                left++;
                right--;
            }
            else if(csum > 0) left++;
            else right--;
        }
    }
    cout << "[";
    for (size_t i = 0; i < store.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < store[i].size(); j++) {
            cout << store[i][j];
            if (j < store[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < store.size() - 1) cout << ","; 
    }
    cout << "]" << endl;

    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums;
//     vector<vector<int>> store;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         int val;
//         cin >> val;
//         nums.push_back(val);
//     }
    
//     // 1. Sort the vector (Essential for the two-pointer approach)
//     sort(nums.begin(), nums.end());
    
//     // 2. Fix one element and use two pointers for the remaining two elements
//     for(int i = 0; i < n - 2; i++){
//         // Skip duplicate values for the first element to avoid duplicate triplets
//         if (i > 0 && nums[i] == nums[i - 1]) continue; 
        
//         int left = i + 1;
//         int right = n - 1;
        
//         while (left < right) {
//             int current_sum = nums[i] + nums[left] + nums[right];
            
//             if (current_sum == 0) {
//                 store.push_back({nums[i], nums[left], nums[right]});
                
//                 // Skip duplicate values for the second element
//                 while (left < right && nums[left] == nums[left + 1]) left++;
//                 // Skip duplicate values for the third element
//                 while (left < right && nums[right] == nums[right - 1]) right--;
                
//                 // Move both pointers inward after finding a valid triplet
//                 left++;
//                 right--;
//             } 
//             else if (current_sum < 0) {
//                 left++; // Sum is too small, move left pointer to increase sum
//             } 
//             else {
//                 right--; // Sum is too large, move right pointer to decrease sum
//             }
//         }
//     }
    
//     // Print the results
//     for(auto s : store){
//         cout << "[";
//         for(size_t idx = 0; idx < s.size(); idx++) {
//             cout << s[idx] << (idx == s.size() - 1 ? "" : " ");
//         }
//         cout << "] ";
//     }
//     return 0;
// }
