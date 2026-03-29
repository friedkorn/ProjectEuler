//Author:CelestialRex
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

void solve(){
    ll a = 2;
    ll b = 8;
    ll sum = 2;
    while (b <= 4000000) {
        sum += b;
        ll c = 4*b + a;
        a = b;
        b = c;
    }
    cout<<sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
