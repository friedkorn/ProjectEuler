//Author:CelestialRex
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

void solve(){
    int ans = 1;
    for (int i=1;i<=20;i++)
        ans =lcm(ans,i);
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
