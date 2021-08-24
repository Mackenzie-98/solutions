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

int main() {
#ifdef LOCAL
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#else
    fastIO;
#endif
    int n;
    cin >> n;
    int arr[n];
    forn(i, n) cin >> arr[i];
    bool mark[n + 1];
    memset(mark, 0, sizeof mark);
    int days = 0;
    int cur = 0;
    int mx = 0;
    while (cur < n) {
        mx = max(arr[cur], mx);
        //cout << cur + 1 << " " << mx << endl;
        if (cur + 1 < mx) {
            cur++;
            continue;
        } else {
            cur++;
            days++;
        }
        //cout << days << " " << cur << endl;
    }
    cout << days << endl;
    return 0;
}