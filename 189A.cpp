#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int maximum = 0;
    for (int i = 0; i <= n; i++)
    {   
        for (int j = 0; j <= n; j++){
            int zc = n - (i*a + j*b);
            if(zc < 0) break;
            float z = zc/(float)c;
            if((int)z == z) maximum = max(maximum,(int)z+j+i);
        }
    }
    cout<<maximum;
    return 0;
}