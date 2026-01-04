#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    
    map<int,int> m2;
    int s = arr[0]+arr[1]+arr[2], m;
    vector<int> vec;
    for (int j = 0; j < s; j++){
        int id;
        cin>>id;
        m2[id]++;
    }
    for (auto p : m2) {
        if(p.second >= 2){
            vec.push_back(p.first);
        }
    }
    cout<<vec.size()<<endl;
    for(auto p:vec){
        cout<<p<<endl;
    }
    return 0;
}
    //     
    // vector<vector<int>> vec;
    // vector<int> tcommon;
    // vector<int> common;
    // for (int i = 0; i < 3; i++)
    // {
    //     vector<int> vec2(arr[i]);
    //     for (int j = 0; j < arr[i]; j++)
    //     {
    //         cin >> vec2[j];
    //     }
    //     vec.push_back(vec2);
    // }

    // set_intersection(vec[0].begin(), vec[0].end(),
    //                  vec[1].begin(), vec[1].end(),
    //                  std::back_inserter(tcommon));
    // set_intersection(tcommon.begin(), tcommon.end(),
    //                  vec[2].begin(), vec[2].end(),
    //                  std::back_inserter(common));
    // for (int n : common)
    //     std::cout << n << " ";