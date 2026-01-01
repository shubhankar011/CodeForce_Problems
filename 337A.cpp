#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,j;
    cin>>n;
    cin>>m;
    vector<int> v;
    int arr[n];
    for (int i = 0; i < m; i++)
    {
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    int min_diff = INT_MAX;
    for (int i = 0; i <= m-n; i++)
    {
        int current_diff = v[i+n-1] - v[i];
        if(current_diff < min_diff){
            min_diff = current_diff;
        }
    }
    cout<<min_diff;
}