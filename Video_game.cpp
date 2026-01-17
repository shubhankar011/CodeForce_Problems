#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int w, h;
    cin >> w >> h;
    vector<int> no(w);
    for (int i = 0; i < w; i++)
    {
        cin >> no[i];
    }
    int c, index = 0;
    bool holding = false;
    while (c != 0)
    {
        cin >> c;
        if (c == 1)
        {
            if (index != 0)
            {
                index--;
            }
        }
        else if (c == 2)
        {
            if (index < (w - 1))
            {
                index++;
            }
        }
        else if (c == 3)
        {
            if(!holding && no[index] > 0){
                no[index] = no[index] - 1;
                holding = true;
            }
        }
        else if (c == 4)
        {
            if(holding &&no[index] < h){
                no[index] = no[index] + 1;
                holding = false;
            }    
        }
    }
    for (auto c : no)
    {
        cout << c << " ";
    }
    return 0;
}