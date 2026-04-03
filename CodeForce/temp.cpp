#include<iostream>
using namespace std;
int bigger(int k,int l, int arr[]){
    if(k > l){
        arr[1] = 0;
        return k;
    }
    else{
        return l;
    }
}
int main(){
    int arr[] = {2,1,3};
    cout<<bigger(arr[0], arr[1], arr)<<endl;
    cout<<arr[1];
}