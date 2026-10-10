#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> t(3);
    int count = 0,n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < 3; j++){
            cin>>t[j];
            if (t[j] > 0){
                temp+=t[j];
            }
        }
        if(temp>1){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}