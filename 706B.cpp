#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin>>vec[i];
    }
    int p;
    cin>>p;
    vector<int> vec2(p);
    for (int i = 0; i < p; i++){
        cin>>vec2[i];
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < p; i++){
        auto it = upper_bound(vec.begin(),vec.end(), vec2[i]);
        cout<<(it-vec.begin())<<endl;
    //    if(vec2[i] < vec[0]){
    //     cout<<0<<endl;
    //    }
    //    else if(vec2[i] >= vec[n-1]){
    //     cout<<n<<endl;
    //    }
    //    else{
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(vec2[i] >= vec[j]){
    //             count++;
    //         }
    //     }
    //     cout<<count<<endl;
    //    }
    }
    return 0;
}