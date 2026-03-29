//Author:CelestialRex
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

bool isPal(int x) {
    string s = to_string(x);
    string p = string(s.rbegin(),s.rend());
    if (s==p)
        return true;
    return false;
}

void solve(){
    int ans=0;
    for (int i=100;i<=999;i++)
        for (int j=i;j<=999;j++)
            if (isPal(i*j))
                ans = max(ans,i*j);
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
