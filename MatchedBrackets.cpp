#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,depth = 0,st_pos = 0,seq = 0,seq_pos = 0;
    int max_depth = INT_MIN,max_st = INT_MIN, max_seq = INT_MIN, max_seq_pos = INT_MIN;
    cin>>n;
    for(int i = 1; i <= n; i++){
        int x;
        cin>>x;
        if(x == 1){
            depth++;
            seq++;
            if(depth > max_depth){
                max_depth = depth;
                st_pos = i;
            }
            if(depth == 1){
                seq_pos = i;                               
            }
        }
        else{
            seq++;
            depth--;
            if(depth == 0){
                if(seq > max_seq){
                    max_seq = seq;
                    max_seq_pos = seq_pos;
                }
                seq = 0;
            }
        }
    }
    cout<<max_depth<<" "<<st_pos<<" "<<max_seq<<" "<<max_seq_pos;
    return 0;
}