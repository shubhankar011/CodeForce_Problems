// // #include<bits/stdc++.h>
// // using namespace std;
// // int indexH(string s1){
// //     for (int i = 0; i < s1.length(); i++)
// //     {
// //         if('h' == s1[i]){
// //             return i;
// //         }
// //     }
// // }
// // int indexO(string s1){
// //     for (int i = 0; i < s1.length(); i++)
// //     {
// //         if('o' == s1[i]){
// //             return i;
// //         }
// //     }
// // }
// // int main(){
// //     string s1;
// //     string s2 = "";
// //     cin>>s1;
// //     // cout<<s1.substr(index(s1));
// //     s1 = s1.substr(indexH(s1),indexO(s1));
// //     cout<<s1;
// //     for(int i = 0; i < s1.length(); i++){ 
// //         bool found = false; 
// //         for(int j = 0; j < s2.length(); j++)
// //         { 
// //             if(s1[i] == s2[j])
// //             { //cout<<"Yes"; 
// //                 found = true; 
// //                 break; 
// //             } 
// //         } 
// //         if(!found)
// //         { 
// //             s2 = s2 + s1[i]; 
// //         } 
// //     }
// //     cout<<endl<<s2<<endl;
// //     if("helo" == s2){
// //         cout<<"YES";
// //     }
// //     else{
// //         cout<<"NO";
// //     }
// //     return 0;
// // }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int j = 0; 

    for (int i = 0; i < (int)s.size() && j < (int)target.size(); ++i) {
        if (s[i] == target[j]) j++;
    }

    if (j == (int)target.size()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     for(int i = 0; i < n; i++){
//         string s;
//         cin >> s;
        
//         if(s.length() <= 10){
//             cout << s << endl;
//         } else {
//             cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
//         }
//     }
//     return 0;
// }