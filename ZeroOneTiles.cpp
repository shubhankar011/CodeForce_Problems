#include <iostream>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    const int MOD = 15746;
    if(N == 0){
        cout << 1 << endl;
        return 0;
    }
    if(N == 1){
        cout << 1 << endl;
        return 0;
    }
    int prev2 = 1; // f(0)
    int prev1 = 1; // f(1)
    int current = 0;
    for (int i = 2; i <= N; i++){
        current = (prev1 + prev2) % MOD;
        prev2 = prev1;
        prev1 = current;
    }
    cout << current << endl;
    return 0;
}