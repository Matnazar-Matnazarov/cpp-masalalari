#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;
int main() {
    ll n;
    cin >> n;
 vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
     for (ll i = 0; i <= n; i++) {
        a[i][0] = a[i][i] = 1;
        for (ll j = 1; j < i; j++) {
            a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % MOD;
        }
    }
    for (ll i = 0; i <= n; i++) {
        for (ll j = 0; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

