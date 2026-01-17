#include<bits/stdc++.h>
using namespace std;
bool isSort(vector<int> vec2, int n){
    if (vec2[n] < vec2[n-1]){
        return false;
    }
    else if(n == 0|| n == 1){
        return true;
    }
    return isSort(vec2,n-1);
}
int main(){
    vector<int> vec = {1,3,2,4,5};
    if(isSort(vec,vec.size())){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }
    return 0;
}