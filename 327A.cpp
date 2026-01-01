#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ones = 0;
    cin>>n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        ones += arr[i];
    }
    
    for(auto c:arr){
        if (c == 1)
        {
            arr2[i] = -1;
        }
        else{
            arr2[i] = 1;
        }
        i++;
    }  
    int maxx = INT_MIN;
    int cs = 0;
    for(auto c:arr2){
        cs += c;
        maxx = max(maxx, cs);
        if (cs < 0)
        {
           cs = 0;
        }
    }
    
    cout<<ones+maxx;
    return 0;
}