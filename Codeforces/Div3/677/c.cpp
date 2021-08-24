#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define ft first
#define sd second
#define forn(i, n) for (int i = 0; i < (int)n; i++)
#define pb push_back
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void debug_out() {cerr << endl;}
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {cerr << " " << to_string(H), debug_out(T...);}

int main() {
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#else
#define debug(...) 3
    fastIO;
#endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int mx=0;
        forn(i,n)cin>>v[i],mx=max(mx,v[i]);
        bool ok=false;
        forn(i,n){
            if(v[i]==mx&&(((i>=1&&v[i-1]<mx))||((i<n-1&&v[i+1]<mx)))){
                ok=true;
                cout<<i+1<<endl;
                break;
            }
        }
        if(!ok)cout<<-1<<endl;

    }
    return 0;
}
