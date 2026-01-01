#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, l = 0, r;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> m;   
        v.push_back(m);
    }
    while (l + 1 < n && v[l] <= v[l+1]) ++l;
    // cout<<endl;
    if (l == n-1) {
        // already sorted
        cout << "yes\n1 1\n";
        return 0;
    }
    r = n - 1;
    while(r-1 >= 0 && v[r-1] <= v[r]) --r;
    reverse(v.begin() + l, v.begin()+1+r);
    bool sorted = true;
    for (int i = 0; i < n; i++)
    {
        if(v[i] > v[i+1]){
            sorted = false;
            cout<<"no";
            break;
        }
    }
    if(sorted){
        cout<<"yes\n"<<l+1<<" "<<r+1;
    }
    return 0;
}