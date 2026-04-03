#include<bits/stdc++.h>
using namespace std;
int binarySearch(int tar, vector<int> vec2,int st,int en){
    int mid = (st+en)/2;
    if (tar == vec2[mid])
    {
        return mid;
    }
    
    else if(tar > vec2[mid]){
        st = mid+1;
        return binarySearch(tar,vec2,st,en);
    }
    else if(tar < vec2[mid]){
        en = mid-1;
        return binarySearch(tar,vec2,st,en);
    }
    return -1;
}
int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int tar = 7;
    int start = 0, end = vec.size();
    cout<<vec[binarySearch(tar,vec,start,end)];
}