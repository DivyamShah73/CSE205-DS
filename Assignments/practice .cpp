#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())
#define lcm(a, b) (a * b) / gcd(a, b)
#define locase(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upcase(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define print(n) cout << n << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pans cout << ans << endl
#define stoi stoll
#define revall(vec) reverse(vec.begin(), vec.end())
#define issubstr(s1, s2) strstr(s1.c_str(), s2.c_str())
#define minel(v) *min_element(all(v))
#define maxel(v) *max_element(all(v))
#define summ(v) accumulate(all(v), int(0))
#define SORT_DESC(vec) sort(vec.begin(), vec.end(), greater<>())
#define ff first
#define ss second
#define deb(n) cout << n << " ";
#define endl '\n'
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) \
    sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

#define fi(l, r) for (ll i = l; i < r; i++)
#define fj(l, r) for (ll j = l; j < r; j++)
#define fir(r, l) for (ll i = r; i >= l; i--)
#define fjr(r, l) for (ll j = r; j >= l; j--)
#define fl(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 1; i <= n; i++)

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
typedef unsigned long long ull;
typedef long double lld;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template <typename T, typename U>
pair<T, T> divmod(T x, U y)
{
    auto q = div(x, y);
    return {q.quot, x - q.quot * y};
}
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (const auto &elem : v)
        os << elem << " ";
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, const vector<vector<T>> &mat)
{
    for (const auto &row : mat)
    {
        for (const auto &elem : row)
            os << elem << " ";
        os << endl;
    }
    return os;
}

vi prefixSum(const vi &v)
{
    vi prefix(sz(v));
    partial_sum(all(v), prefix.begin());
    return prefix;
}

vi suffixSum(const vi &v)
{
    vi suffix(sz(v));
    partial_sum(v.rbegin(), v.rend(), suffix.rbegin());
    return suffix;
}

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve()
{
    // proove yourself
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(10);

    int testCases = 1;
    cin >> testCases;

    while (testCases--)
    {
        solve();
    }

    return 0;
}