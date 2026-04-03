#include<bits/stdc++.h>
using namespace std;
int main(){
    int s = 0, d = 0;
    int n;
    cin>>n;
    int turn = 0;
    int arr[n];
    int l = 0, r = n-1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    while (l <= r)
    {
        int chosen;
        if (arr[l] > arr[r])
        {
            chosen = arr[l];
            l++;
        }
        else{
            chosen = arr[r];
            r--;
        }
        if (turn == 0)
        {
            s+=chosen;
            turn++;
        }
        else{
            d += chosen;
            turn--;
        }   
    }
    
    cout<<s<<" "<<d;
    return 0;
}