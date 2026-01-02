//FOR BEST Time Complexity of 0(log n)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,input,max_val;
    priority_queue<int> vec;
    cin>>n>>m;
    int j = 0;
    vector<int> removed_elements;
    for(int i = 0; i < n+m; i++){
        cin>>input;
        if(input==-1){
           removed_elements.push_back(vec.top());
           vec.pop();
        }
        else{
            vec.push(input);
        }
    }
    for(auto c:removed_elements){
        cout<<c<<endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,m,input,max_val;
//     vector<int> vec;
//     cin>>n>>m;
//     int j = 0;
//     vector<int> removed_elements;
//     for(int i = 0; i < n+m; i++){
//         cin>>input;
//         if(input==-1){
//             auto res = minmax_element(vec.begin(), vec.end());
//                 auto max_it = res.second;
//                 removed_elements.push_back(*max_it);
//                 vec.erase(max_it);
//         }
//         else{
//             vec.push_back(input);
//         }
//     }
//     for(auto c:removed_elements){
//         cout<<c<<endl;
//     }
//     return 0;
// }


