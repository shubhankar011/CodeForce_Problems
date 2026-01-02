#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,lead,max = INT_MIN,w,p1,p2,t1 = 0,t2 = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
	    cin>>p1>>p2;
	    t1+=p1;
	    t2+=p2;
	    lead = abs(t1-t2);
	    if(lead > max){
	        max = lead;
	        w = (t1>t2) ? 1:2;
	    }
	}
	cout<<w<<" "<<max;
}
