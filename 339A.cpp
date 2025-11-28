#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    //main code
    string str;
    vector<char> v;
    char c = '+';

    getline(cin, str);
    str.erase(remove(str.begin(),str.end(), c),str.end());

    // cout<<str;

    for(auto c : str){
        v.push_back(c);
    }

    stable_sort(v.begin(),v.end());

    int i = 1;
    for(auto val : v){
        if (i < v.size())
        {
          cout<<val<<'+';  
        }
        
        else{
            cout<<val;
        }
        i += 1;
    }

    return 0;
}











// bool comp(string a, string b){
//     if(a.size() == b.size()){
//         return a < b;
//     }
//     else{
//         return a.size() < b.size();
//     }
// }



// vector<string> v
//         = { "12", "2", "10", "6", "4", "99", "12" };
//     sort(v.begin(),v.end(), comp);    
//     for (auto it : v) {
//         cout << it << " ";
//     }
    // /*vector<int> a = {79,4,3452,243,234};
    // sort(a.begin(),a.end(), comp);
    // for(auto val : a){
    //     cout<<val<<endl;
    // }*/
    // vector<int> a ;
    // // sort(a.begin(),a.end(), comp);
    // for(int i = 0; i < 10; i++){
    //     int b;
    //     cout<<"Enter something: ";
    //     cin>>b;
    //     a.push_back(b);
    // }
    // for(auto val: a){
    //     cout<<val<<" ";
    // }