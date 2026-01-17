#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, start = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> line;
    vector<string> chunks;
    string str, str2;
    getline(cin, str);
    for (int i = 0; i < n; i++) {
        size_t k = str.find('.', start);
        if (k != string::npos) {
            line.push_back(str.substr(start, k - start + 1));
            start = k + 1;
        }
    }
    start = 0;
    for (string& c : line) {
        while (true) {
            size_t k = c.find(' ', start);
            if (k == string::npos) {
                string last_word = c.substr(start);
                if (!last_word.empty()) chunks.push_back(last_word);
                break;
            }
            string word = c.substr(start, k - start);
            if (!word.empty()) chunks.push_back(word);
            start = k + 1; 
        }
    }
    reverse(chunks.begin(),chunks.end());
    for(auto c : chunks){
        cout<<c<<" ";
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin>>n;
//     cin.ignore();
//     string str = "This is a new line. Is this?";
//     vector<string> s;
//     // getline(cin,str);
//     int start = 0;
//     for (int i = 0; i < n; i++)
//     {
//         string str2;
//         int j = str.find(' ');
//         if(i < n){
//             int k = str.find('.');
//             str.replace(k,1,"\n");
//             str2 = str.substr(start,j+1);
//             s.push_back(str2);
//             start = j+2;
//         }
//         else{
//             str2 = str.substr(start,j+1);
//             s.push_back(str2);
//             start = j+2;
//         }
//     }
//     for(auto p:s){
//         cout<<p<<" ";
//     }
//     return 0;
// }