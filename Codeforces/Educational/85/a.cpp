/**
 * @author: Mackenzie
**/
#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define forn(i, n) for (int i = 0; i < (int)n; i++)
#define pb push_back
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
#ifdef LOCAL
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#else
    fastIO;
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pii> v(n);
        forn(i, n) cin >> v[i].F >> v[i].S;
        int a = 0, b = 0;
        bool ok = 1;
        forn(i, n) {
            ok &= (v[i].F >= a && v[i].S >= b) && (v[i].F - a) >= (v[i].S - b);
            a = v[i].F;
            b = v[i].S;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}