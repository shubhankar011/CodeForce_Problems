#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, streak = 1, max_streak = 1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] <= arr[i+1]){
            streak++;
        }
        else{
            streak = 1;
        }
        if (streak > max_streak)
        {
            max_streak = streak;
        }
    }
    cout<<max_streak;
    return 0;
}