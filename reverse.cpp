#include<bits/stdc++.h>

using namespace std;

int main() {
   int n;
   cin>>n;
   cin.ignore();
   vector<string> lines;
   for(int i = 0; i < n; i++){
       string line;
       getline(cin,line);
       lines.push_back(line);
   }
   for(int i = n-1; i >= 0; i--){
       string cleaned = "";
       for(auto c:lines[i]){
           if(isalpha(c) || isspace(c)){
               cleaned.push_back(c);
           }
           else{
               cleaned.push_back(' ');
           }
       }
       stringstream ss(cleaned);
       string word;
       vector<string> words;
       while(ss >> word){
           words.push_back(word);
       }
       reverse(words.begin(),words.end());
       for(auto c: words){
           cout<<c<<" ";    
       }
       cout<<endl;
   }
    return 0;
}
