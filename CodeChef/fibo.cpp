#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        // if (i == 0){
        //     cout<<0<<" ";
        // }
        // else if(i == 1){
        //     cout<<1<<" ";
        // }
        cout<<fibo(i)<<" ";
    }
    return 0;
}