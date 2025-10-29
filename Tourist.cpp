#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        int ans=INT_MAX;
        for (int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            ans=min(ans, abs(a-x) + abs(b-y));
        }
        cout<<ans<<endl;
    }
}
