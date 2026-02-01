#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x,y,z,min = INT_MAX;
    cin>>x>>y>>z;
    vector<pair<int,int>> vec(x);
    vector<int> v(y);
    vector<int> w(z);
    for (int i = 0; i < x; i++){
        int st,en;
        cin>>st>>en;
        vec[i] = {st,en};
    }
    for (int i = 0; i < y; i++) cin>>v[i];
    for (int i = 0; i < z; i++) cin>>w[i];
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    for(auto const& p:vec){
        auto st = upper_bound(v.begin(),v.end(),p.first);
        auto en = lower_bound(w.begin(),w.end(),p.second);
        if(st != v.begin() && en != w.end()){
            int val1 = *(--st),val2 = *(en);
            int dist = val2-val1+1;
            if(dist<min){
                min = dist;
            }
        }
    }
    cout<<min;
    return 0;
}