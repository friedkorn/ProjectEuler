//Author:CelestialRex
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

void solve(){
    int lim = 200000;
    vector<bool> g(lim,true);
    g[0]=g[1]=false;
    for (int i=2;i*i<lim;i++)
        if (g[i])
            for (int j=i*i;j<lim;j+=i)
                g[j]=false;
    int count=0;
    for (int i=2;i<lim;i++) {
        if (g[i])
            count++;
        if (count==10001) {
            cout<<i;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
