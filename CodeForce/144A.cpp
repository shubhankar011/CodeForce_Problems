#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int steps;
    cin>>n;
    vector<int> s(n);
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    auto max_it = max_element(s.begin(),s.end());
    auto min_it = min_element(s.rbegin(), s.rend());

    int max_index = distance(s.begin(), max_it);
    int min_index = (n-1) - distance(s.rbegin(),min_it);
    // cout<<max_index << " "<<min_index<<endl;
    steps = max_index + (n - 1) - min_index;
    
    if (max_index > min_index) {
        steps--;
    }
    cout<<steps;
    return 0;
}