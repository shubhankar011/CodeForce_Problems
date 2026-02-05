#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int temp = 0, maxi = 0;
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    int k;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {   temp = 2;
            int cd = vec[j] - vec[i];
            int next = vec[j] + cd;
            int l = j;
            while (binary_search(vec.begin(), vec.end(), next))
            {
                l++;
                next += + cd;
                temp++;
            }
            if (temp > maxi)
            {
                maxi = temp;
            }
        }
    }
    cout << maxi;
    return 0;
}
// 5 8 10 13 15 17 20