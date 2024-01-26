#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll S, N;
    cin >> S >> N;
    vector<ll> a(N);
    for (ll i = 0; i < N; i++) {
        cin >> a[i];
    }
    vector<vector<bool>> v(N+1, vector<bool>(S+1, false));
    v[0][0] = true;
    for (ll i = 1; i <= N; i++) {
        for (ll j = 0; j <= S; j++) {
            v[i][j] = v[i-1][j];
            if (j >= a[i-1]) {
                v[i][j] = v[i][j] || v[i-1][j-a[i-1]];
            }
        }
    }
    ll m = 0;
    for (ll j = S; j >= 0; j--) {
        if (v[N][j]) {
            m = j;
            break;
        }
    }
    cout << m << endl;
    return 0;
}
