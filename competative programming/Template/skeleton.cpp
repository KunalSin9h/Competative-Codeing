#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
using namespace std;

using str = string;
typedef long long ll;
typedef long double db;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;

const clock_t beg = clock();
const db PI = acos((db)-1);
constexpr int pct(int x){return __builtin_popcount(x);}

#define vt vector
#define unset unordered_set
#define unmap unordered_map

#define F0(n) for(int i = 0;i<n; ++i)
#define F1(n) for(int i = 1;i<=n; ++i)
#define print(arr, n) for(int i=0;i<n;++i){cout << arr[i] << " ";} cout << nl;
#define read(arr, n) for(int i=0;i<n;++i){cin >> arr[i];}
#define trav(i, n) for(auto &i: n)

#define f first
#define s second
#define pb push_back
#define sz(x) ((int)x.size())
#define all(x) begin(x), end(x)
#define ter cout<<nl
#define nl '\n'

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; } // set a = min(a, b)
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; } // set a = max(a, b)

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef DEBUG
#define dbg(x...) cerr << "   "<<__func__<<": "<<__LINE__<<" [" << #x << "] = ["; _print(x)
#define dbg_time() cerr << "   " << "Time: " << __LINE__ << " = [ " << ((db)(clock()-beg)/CLOCKS_PER_SEC)  << " ]"<< endl;
#else
#define dbg(x...)
#define dbg_time()
#endif

const int mod = 1000000007;


void solve(){


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);

    int Test = 1;
    cin >> Test;
    while(Test--){solve();}
    return 0;
}
