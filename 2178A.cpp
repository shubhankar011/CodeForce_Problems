#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++){
        string s;
        cin>>s;
        int a = count(s.begin(),s.end(),'Y');
        if (a <= 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
