// #include <bits/stdc++.h>
// using namespace std;

// // ---------- types ----------
// using ll   = long long;
// using ull  = unsigned long long;
// using ld   = long double;
// using pii  = pair<int,int>;
// using pll  = pair<ll,ll>;
// using vi   = vector<int>;
// using vll  = vector<ll>;
// using vvi  = vector<vi>;
// using vvll = vector<vll>;
// using vpii = vector<pii>;
// using vpll = vector<pll>;
// using vs   = vector<string>;
// using vb   = vector<bool>;
// using si   = set<int>;
// using sll  = set<ll>;
// using mii  = map<int,int>;
// using mll  = map<ll,ll>;

// // ---------- shortcuts ----------
// #define pb          push_back
// #define eb          emplace_back
// #define ppb         pop_back
// #define pf          push_front
// #define fi          first
// #define se          second
// #define all(x)      (x).begin(), (x).end()
// #define rall(x)     (x).rbegin(), (x).rend()
// #define sz(x)       (int)(x).size()
// #define len(x)      (int)(x).size()
// #define endl        "\n"
// #define nl          cout << "\n"
// #define YES         cout << "YES\n"
// #define NO          cout << "NO\n"
// #define Yes         cout << "Yes\n"
// #define No          cout << "No\n"
// #define yn(c)       cout << ((c) ? "YES\n" : "NO\n")

// // ---------- loops ----------
// #define rep(i,a,b)  for(int i = (a); i < (b); i++)
// #define per(i,a,b)  for(int i = (a); i >= (b); i--)
// #define fo(i,n)     for(int i = 0; i < (n); i++)
// #define each(x,v)   for(auto &x : v)

// // ---------- input / output ----------
// #define in(v)       for(auto &_i : v) cin >> _i
// #define out(v)      { for(auto &_i : v) cout << _i << " "; cout << "\n"; }
// #define dbg(x)      cerr << #x << " = " << (x) << "\n"
// #define inn(n)      int n; cin >> n
// #define inl(n)      ll n; cin >> n
// #define inv(v,n)    vi v(n); in(v)
// #define invl(v,n)   vll v(n); in(v)

// // ---------- algorithms ----------
// #define sor(v)      sort(all(v))
// #define rsor(v)     sort(rall(v))
// #define rev(v)      reverse(all(v))
// #define uniq(v)     sort(all(v)), (v).erase(unique(all(v)), (v).end())
// #define mn(v)       *min_element(all(v))
// #define mx(v)       *max_element(all(v))
// #define sum(v)      accumulate(all(v), 0LL)
// #define lb(v,x)     lower_bound(all(v), x)
// #define ub(v,x)     upper_bound(all(v), x)
// #define has(v,x)    (find(all(v), x) != (v).end())
// #define cnt(v,x)    count(all(v), x)
// #define bs(v,x)     binary_search(all(v), x)
// #define popcnt(x)   __builtin_popcountll(x)
// #define clz(x)      __builtin_clzll(x)
// #define ctz(x)      __builtin_ctzll(x)

// // ---------- constants ----------
// const int  MOD  = 1e9 + 7;
// const int  MOD2 = 998244353;
// const int  INF  = 1e9;
// const ll   LINF = 1e18;
// const ld   EPS  = 1e-9;

// // ---------- helpers ----------
// template<class T> bool chmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
// template<class T> bool chmax(T &a, const T &b) { return b > a ? a = b, 1 : 0; }
// ll power(ll a, ll b, ll m = MOD) { ll r = 1; a %= m; while (b) { if (b & 1) r = r * a % m; a = a * a % m; b >>= 1; } return r; }
// ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }

// void solve()
// {
//     inn(n);
//     inn(k);
//     string s; cin >> s;
    
//     int ans = 0;
//     int i = 0;
//     while(i < n)
//     {
//         if(s[i] == '1')
//         {
//             ans++;
//             i += k + 1;
//         }
//         else i++;
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// # define ll long long
// #define pii pair<int,int>
// #define pll pair<long long,long long>
// #define input(x) for(auto &i:x) cin>>i
// #define output(x) for(auto &i:x) cout<<i<<" "
// #define yes() cout << "YES\n"
// #define no() cout << "NO\n"
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define endl "\n"

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int n,k; cin >> n >> k;
//         string s;
//         cin >> s;
//         int i = 0,ans = 0;
//         while(i < n)
//         {
//             if(s[i] == '1')
//             {
//                 ans++;
//                 i += k+1;
//             }
//             else i++;
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// ---------- types ----------
using ll   = long long;               // 64-bit signed integer
using ull  = unsigned long long;      // 64-bit unsigned integer
using ld   = long double;             // high-precision floating point
using pii  = pair<int,int>;           // pair of ints
using pll  = pair<ll,ll>;             // pair of long longs
using vi   = vector<int>;             // vector of ints
using vll  = vector<ll>;              // vector of long longs
using vvi  = vector<vi>;              // 2D vector of ints (grid/adjacency list)
using vvll = vector<vll>;             // 2D vector of long longs
using vpii = vector<pii>;             // vector of int pairs
using vpll = vector<pll>;             // vector of ll pairs
using vs   = vector<string>;          // vector of strings
using vb   = vector<bool>;            // vector of bools (visited arrays etc.)
using si   = set<int>;                // ordered set of ints
using sll  = set<ll>;                 // ordered set of long longs
using mii  = map<int,int>;            // ordered map int -> int
using mll  = map<ll,ll>;              // ordered map ll -> ll

// ---------- shortcuts ----------
#define pb          push_back         // append to back of container
#define eb          emplace_back      // construct in place at back (faster than pb for pairs/structs)
#define ppb         pop_back          // remove last element
#define pf          push_front        // insert at front (deque/list only)
#define fi          first             // first element of pair
#define se          second            // second element of pair
#define all(x)      (x).begin(), (x).end()    // full range, for sort/find/etc.
#define rall(x)     (x).rbegin(), (x).rend()  // full reverse range
#define sz(x)       (int)(x).size()   // size as int (avoids unsigned compare bugs)
#define len(x)      (int)(x).size()   // same as sz, Python-style name
#define endl        "\n"              // fast newline (no flush); overrides std::endl
#define nl          cout << "\n"      // print a blank line
#define YES         cout << "YES\n"   // print YES
#define NO          cout << "NO\n"    // print NO
#define Yes         cout << "Yes\n"   // print Yes
#define No          cout << "No\n"    // print No
#define yn(c)       cout << ((c) ? "YES\n" : "NO\n")  // print YES/NO based on condition c

// ---------- loops ----------
#define rep(i,a,b)  for(int i = (a); i < (b); i++)    // loop i from a to b-1
#define per(i,a,b)  for(int i = (a); i >= (b); i--)   // reverse loop i from a down to b (inclusive)
#define fo(i,n)     for(int i = 0; i < (n); i++)      // loop i from 0 to n-1
#define each(x,v)   for(auto &x : v)                  // range-for by reference over v

// ---------- input / output ----------
#define in(v)       for(auto &_i : v) cin >> _i       // read all elements of v
#define out(v)      { for(auto &_i : v) cout << _i << " "; cout << "\n"; }  // print v space-separated + newline
#define dbg(x)      cerr << #x << " = " << (x) << "\n"  // debug print to stderr: "name = value"
#define inn(n)      int n; cin >> n                   // declare and read an int
#define inl(n)      ll n; cin >> n                    // declare and read a long long
#define inv(v,n)    vi v(n); in(v)                    // declare vector<int> of size n and read it
#define invl(v,n)   vll v(n); in(v)                   // declare vector<ll> of size n and read it

// ---------- algorithms ----------
#define sor(v)      sort(all(v))                      // sort ascending
#define rsor(v)     sort(rall(v))                     // sort descending
#define rev(v)      reverse(all(v))                   // reverse in place
#define uniq(v)     sort(all(v)), (v).erase(unique(all(v)), (v).end())  // sort + remove duplicates
#define mn(v)       *min_element(all(v))              // minimum value in v
#define mx(v)       *max_element(all(v))              // maximum value in v
#define sum(v)      accumulate(all(v), 0LL)           // sum of v as long long
#define lb(v,x)     lower_bound(all(v), x)            // iterator to first element >= x (v must be sorted)
#define ub(v,x)     upper_bound(all(v), x)            // iterator to first element > x (v must be sorted)
#define has(v,x)    (find(all(v), x) != (v).end())    // true if x exists in v (O(n) linear scan)
#define cnt(v,x)    count(all(v), x)                  // number of occurrences of x in v
#define bs(v,x)     binary_search(all(v), x)          // true if x exists in sorted v (O(log n))
#define popcnt(x)   __builtin_popcountll(x)           // number of set bits
#define clz(x)      __builtin_clzll(x)                // count leading zeros (undefined if x == 0)
#define ctz(x)      __builtin_ctzll(x)                // count trailing zeros (undefined if x == 0)

// ---------- constants ----------
const int  MOD  = 1e9 + 7;           // standard modulus
const int  MOD2 = 998244353;         // NTT-friendly modulus
const int  INF  = 1e9;               // infinity for int (safe to add two without overflow)
const ll   LINF = 1e18;              // infinity for long long
const ld   EPS  = 1e-9;              // epsilon for floating-point comparison

// ---------- helpers ----------
// set a = b if b is smaller; returns true if updated
template<class T> bool chmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
// set a = b if b is larger; returns true if updated
template<class T> bool chmax(T &a, const T &b) { return b > a ? a = b, 1 : 0; }
// modular exponentiation: a^b mod m in O(log b)
ll power(ll a, ll b, ll m = MOD) { ll r = 1; a %= m; while (b) { if (b & 1) r = r * a % m; a = a * a % m; b >>= 1; } return r; }
// greatest common divisor (Euclid)
ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }

void solve()
{
    inn(n);                          // input n
    inv(v,n);
    out(v);

}

int main()
{
    ios::sync_with_stdio(false);     // disable C/C++ I/O sync for speed
    cin.tie(nullptr);                // untie cin from cout for speed

    int t = 1;
    //cin >> t;                        // number of test cases
    while (t--) solve();

    return 0;
}