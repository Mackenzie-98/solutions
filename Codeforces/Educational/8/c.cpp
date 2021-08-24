#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define forn(i, n) for (int i = 0; i < (int)n; i++)
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int main() {
#ifdef LOCAL
    // freopen("h.txt", "r", stdin);
    // freopen("main.out", "w", stdout);
#else
    ios::sync_with_stdio(0), cin.tie(0);
#define endl '\n'
#endif
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = sz(s);
        int ind = 0;
        for (int i = 1; i < n; i++) {
            ind = i;
            while (s[ind - 1] - '0' > s[ind] - '0' && ind < n) {
                swap(s[ind - 1], s[ind]);
                ind++;
            }
        }
        cout << s << endl;
    }

    return 0;
}