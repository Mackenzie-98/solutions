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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll rand(ll a, ll b) { return uniform_int_distribution<ll>(a, b)(rng); }
int main() {
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#else
    ios::sync_with_stdio(0), cin.tie(0);
#define endl '\n'
#endif
    int t;
    cin >> t;
    int casos = 0;
    while (t--) {
        casos++;
        int n;
        cin >> n;
        int mat[n][n];
        forn(i, n) {
            string s;
            cin >> s;
            forn(j, n) { mat[i][j] = s[j] - '0'; }
        }
        int m;
        cin >> m;
        forn(i, m) {
            string op;
            cin >> op;
            if (op == "transponer") {
                int mat2[n][n];
                memset(mat2, 0, sizeof mat2);
                forn(i, n) {
                    forn(j, n) { mat2[j][i] = mat[i][j]; }
                }
                forn(i, n) {
                    forn(j, n) { mat[i][j] = mat2[i][j]; }
                }
            }
            if (op == "fila") {
                int a, b;
                cin >> a >> b;
                a--, b--;
                forn(i, n) swap(mat[a][i], mat[b][i]);
            }
            if (op == "columna") {
                int a, b;
                cin >> a >> b;
                a--, b--;
                forn(i, n) swap(mat[i][a], mat[i][b]);
            }
            if (op == "inc") {
                forn(i, n) {
                    forn(j, n) { mat[i][j] = (mat[i][j] + 1) % 10; }
                }
            }
            if (op == "dec") {
                forn(i, n) {
                    forn(j, n) {
                        if (mat[i][j] == 0)
                            mat[i][j] = 9;
                        else
                            mat[i][j]--;
                    }
                }
            }
        }
        cout << "Case #" << casos << endl;
        // cout << "Cawwdawdase #" + casos << endl;
        forn(i, n) {
            forn(j, n) { cout << mat[i][j]; }
            cout << endl;
        }
        cout << endl;
    }
    // cout << 49 << endl;
    // int t = 49;
    // for (int i = 0; i <= t; i++) {
    //     int n = rand(1, 9);
    //     cout << n << endl;
    //     forn(i, n) {
    //         forn(j, n) { cout << rand(0, 9); }
    //         cout << endl;
    //     }
    //     cout << (n == 1 ? 30 : 50) << endl;
    //     forn(i, 10) cout << "inc" << endl;
    //     forn(i, 10) cout << "dec" << endl;
    //     forn(i, 10) cout << "transponer" << endl;
    //     if (n != 1) {
    //         int a, b;
    //         forn(i, 10) {
    //             a = rand(1, n);
    //             b = rand(1, n);
    //             while (a == b) {
    //                 a = rand(1, n);
    //                 b = rand(1, n);
    //             }
    //             cout << "fila " << a << " " << b << endl;
    //         }
    //         forn(i, 10) {
    //             a = rand(1, n);
    //             b = rand(1, n);
    //             while (a == b) {
    //                 a = rand(1, n);
    //                 b = rand(1, n);
    //             }
    //             cout << "columna " << a << " " << b << endl;
    //         }
    //     }
    // }
    return 0;
}