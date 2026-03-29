//Author:CelestialRex
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

void solve(){
    for (int a =1;a<1000;a++)
        for (int b =a+1; b<1000;b++) {
            int c = 1000-a-b;
            if (a*a+b*b ==c*c) {
                cout << a*b*c;
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
