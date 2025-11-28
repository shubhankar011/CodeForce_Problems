#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int ms = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k];
            }
            cout<<" ";

        }
        cout<<endl;
    }
    for (int i = 0; i < 5; i++)
    {
        int cs = 0;
        for (int j = i; j < 5; j++)
        {
            cs += arr[j];
            ms = max(cs,ms);
        }
    }
    cout<<"max sum of subarry is: "<<ms<<endl;

    //Kandane's Algorithm
    int cs = 0;
    ms = INT_MIN;
    for(auto c : arr){
        cs+=c;
        ms = max(cs,ms);
        if (cs < 0)     
        {
            cs = 0;
        }
    }
    cout<<"Maximum sum of array using Kadane's Algorithm: "<<ms;
    return 0;
}