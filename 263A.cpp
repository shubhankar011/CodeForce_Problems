#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5], index[2], count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j] == 1){
                index[0] = i+1;
                index[1] = j+1;
                break;
            }
        }
    }

    // cout<<index[0]<<endl<<index[1]<<endl;

    while(index[0] != 3 || index[1] != 3){
        if(index[0] > 3){
            index[0] -= 1;
            count+=1;
        }
        else if(index[0] < 3){
            index[0] += 1;
            count+=1;
        }

        if(index[1] > 3){
            index[1] -= 1;
            count+=1;
        }
        else if(index[1]<3){
            index[1] += 1;
            count+=1;
        }
    }
    cout<<count;
    return 0;
}