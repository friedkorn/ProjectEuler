//Author:CelestialRex
#include <bits/stdc++.h>
//For the largest prime factor
using namespace std;
using ll= long long int;

void solve(){
    ll n = 600851475143;
    for (ll i = 2;i*i<=n;i++) {
        while (n%i==0)
            n/=i;
    }
    cout<<n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
