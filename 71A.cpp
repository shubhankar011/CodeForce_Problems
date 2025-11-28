#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    int n;
    string s;

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(auto c: v){
        if(c.length() < 10){
            cout<<c<<endl;
        }
        else{
            cout<<c.front()<<c.length()-2<<c.back()<<endl;
        }
    }

    return 0;
}
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
//     int n;
//     string s;
//     char st, en;
//     vector<string> v;
//     vector<char> v2;
//     vector<char> v3;
//     vector<int> v4;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         // cout<<"Write word: ";
//         cin>>s;
//         v.push_back(s);
//     }
//     for(auto c : v){
//         if(c.length() <= 10){
//             v2.push_back(c[0]);
//             v3.push_back(c[0]);
//         }
//         else{
//             v2.push_back(c[0]);
//             v3.push_back(c[c.length()-1]);
//         }
//     }

//     for(auto c: v){
//         if(c.length() <= 10){
//             v4.push_back(c.length());
//         }
//         else{
//             c.erase(0,1);
//             c.erase(c.length()-1,1);
//             v4.push_back(c.length());
//         }
//     }

//     for(int i = 0; i < v.size(); i++){
//         if(v[i].length() <= 10){
//             cout<<v[i]<<endl;
//         }
//         else{
//             cout<<v2[i]<<v4[i]<<v3[i]<<endl;
//         }
//     }

//     return 0;
// }