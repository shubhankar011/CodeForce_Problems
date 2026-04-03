#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++){
        string s;
        cin >> s;
        for (char &c : s){
            c = (char)toupper(c);
        }
        // transform(s.begin(),s.end(),s.begin(),::toupper);
        if (s == "YES")
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}