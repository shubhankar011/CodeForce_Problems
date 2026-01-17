#include<bits/stdc++.h>
using namespace std;
void subsets(vector<int>& vec, vector<int>& ans, int i){
    if(i == vec.size()){
        for(auto c:ans){
            cout<<c<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(vec[i]);  // {1,3} //{2}
    subsets(vec,ans,i+1); //2 // 1 // 3 -> 2 // 1
    ans.pop_back(); // {1,2} // {1} // {1} //{}
    subsets(vec,ans,i+1); // 3 // 2 // 2 // 3 -> 2 //
}
int main(){
    vector<int> vec = {1,2,3};
    vector<int> vec2 ={};
    subsets(vec,vec2,0);
}