#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int book(int n,int k,vector<int>&s1,vector<int>&s2){
    int i = 0;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    while(i < k){
        if(s1[0]<s2[n-1]){
            swap(s1[0],s2[n-1]);
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
        }
        i++;
    }
    return s1[n-1]+s2[n-1];
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> s1(n), s2(n);
    int max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++) cin >> s1[i];
    for (int i = 0; i < n; i++) cin >> s2[i];
    cout<<min(book(n,k,s1,s2),book(n,k,s2,s1));
    return 0;
}