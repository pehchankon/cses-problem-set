#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) (v).begin(), (v).end()
#define F first
#define S second
#define PB push_back
#define MP make_pair
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pi;
constexpr int INF = 0x3f3f3f3f;
constexpr long long LINF = 0x3f3f3f3f3f3f3f3fLL;
constexpr double EPS = 1e-8;
constexpr int MOD = 1000000007;
// constexpr int MOD = 998244353;
constexpr int DY4[]{1, 0, -1, 0}, DX4[]{0, -1, 0, 1};
constexpr int DY8[]{1, 1, 0, -1, -1, -1, 0, 1};
constexpr int DX8[]{0, -1, -1, -1, 0, 1, 1, 1};
template <typename T, typename U>
inline bool chmax(T &a, U b) { return a < b ? (a = b, true) : false; }
template <typename T, typename U>
inline bool chmin(T &a, U b) { return a > b ? (a = b, true) : false; }
struct IOSetup
{
    IOSetup()
    {
        std::cin.tie(nullptr);
        std::ios_base::sync_with_stdio(false);
        std::cout << fixed << setprecision(20);
    }
} iosetup;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int n;
    cin >> n;
    if ((n + 1) % 4 == 0)
    {
        cout << "YES\n";
        int d = (n + 1) / 4;
        cout << (d - 1) * 2 + 1 << endl;
        cout << n << ' ';
        REP(i, d - 1)
            cout << n - i - 1 << ' ' << i + 1 << ' ';
        cout << endl
             << n - 1 - (d - 1) * 2 << endl;
        FOR(i, d, n + 1 - d)
            cout << i << ' ';
    }
    else if (n % 4 == 0)
    {
        cout << "YES\n";
        cout << n/2 << endl;
        REP(i,n/4)
            cout << n-i << ' ' << i+1 << ' ';
        cout << endl << n/2 << endl;
        FOR(i,n/4,n/2)
            cout << n-i << ' ' << i+1 << ' ';
        cout << endl;

    }
    else
    {
        cout << "NO\n";
        return;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}