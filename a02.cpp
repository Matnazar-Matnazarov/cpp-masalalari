#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<ll> b(n + 1);
    b[0] = 0;
    b[1] = a[1];
    for (int i = 2; i <= n; i++) {
         b[i] = max(b[i - 1], b[i - 2]) + a[i];
    }
    cout << b[n] << endl;
    return 0;
}
