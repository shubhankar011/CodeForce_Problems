#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 0,count = 0;
    cin>>n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>> arr2;
    auto chunks = 3;
    for (auto i = arr.begin(); i < arr.end(); i+=chunks)
    {
        auto end = (distance(i, arr.end()) >= chunks) ? (i + chunks) : arr.end();
        arr2.emplace_back(i,end);
    }
    for (auto row : arr2) {
        sort(row.begin(),row.end());
        sum+= (row[0]); 
    }
    cout<<sum;
    return 0;
}