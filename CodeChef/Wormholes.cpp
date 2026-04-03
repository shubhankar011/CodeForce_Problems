#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<pair<int, int>> vec(x);
    for (int i = 0; i < x; i++)
        cin >> vec[i].first >> vec[i].second;
    vector<int> v(y), w(z);
    for (int i = 0; i < y; i++)
        cin >> v[i];
    for (int i = 0; i < z; i++)
        cin >> w[i];
    int absolute = INT_MAX;
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    for (int i = 0; i < x; i++){
        auto it = upper_bound(v.begin(), v.end(), vec[i].first);
        auto it2 = lower_bound(w.begin(), w.end(), vec[i].second);
        if (it != v.begin() && it2 != v.end())
        {
            auto b = *(--it);
            auto c = *(it2);
            auto d = c-b+1;
            if (absolute > d){
                absolute = d;
            }
        }
    }
    cout << absolute;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int x,y,z,min = INT_MAX;
//     cin>>x>>y>>z;
//     vector<pair<int,int>> vec(x);
//     vector<int> v(y);
//     vector<int> w(z);
//     for (int i = 0; i < x; i++){
//         int st,en;
//         cin>>st>>en;
//         vec[i] = {st,en};
//     }
//     for (int i = 0; i < y; i++) cin>>v[i];
//     for (int i = 0; i < z; i++) cin>>w[i];
//     sort(v.begin(),v.end());
//     sort(w.begin(),w.end());
//     for(auto const& p:vec){
//         auto st = upper_bound(v.begin(),v.end(),p.first);
//         auto en = lower_bound(w.begin(),w.end(),p.second);
//         if(st != v.begin() && en != w.end()){
//             int val1 = *(--st),val2 = *(en);
//             int dist = val2-val1+1;
//             if(dist<min){
//                 min = dist;
//             }
//         }
//     }
//     cout<<min;
//     return 0;
// }