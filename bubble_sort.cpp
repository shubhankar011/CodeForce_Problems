#include<bits/stdc++.h>
using namespace std;
int main(){
    //337A
    cin.tie(nullptr);
    int n,m,c;
    cin>>n;
    cin>>m;
    int arr[m];
    
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < sizeof(arr)/sizeof(int)-1; i++)
    {
        for (int j = i+1; j < sizeof(arr)/sizeof(int); j++)
        {   if(arr[i] > arr[j]){
                c = arr[i] ;
                arr[i] = arr[j];
                arr[j] = c;
            }   
        }
    
    }
    int cs;
    int ms = INT_MAX;
    for (int i = 0; i < m-n; i++)
    {
        cs = arr[n+i-1] - arr[i];
        if(ms>cs){
            ms = cs;
        }
    }
    cout<<ms;
    return 0;
}
    // int c = 0;
    // int arr[] = {13,89,77,57,34};
    // for (int i = 0; i < sizeof(arr)/sizeof(int)-1; i++)
    // {
    //     for (int j = i+1; j < sizeof(arr)/sizeof(int); j++)
    //     {   if(arr[i] > arr[j]){
    //             c = arr[i] ;
    //             arr[i] = arr[j];
    //             arr[j] = c;
    //         }   
    //     }
    // }
    // for(auto v: arr){
    //     cout<<v<<" ";
    // }