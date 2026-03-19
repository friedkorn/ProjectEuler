//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;

void solve(){
    int n = 1000;
    int sum =0;
    for (int i=2;i<n;++i)
        if (i%3==0||i%5==0)
            sum += i;
    cout<<sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
