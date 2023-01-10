#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define endl '\n'
#define vl vector<long long>
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define fore(i, k, n) for (int i = k; i < n; ++i)
constexpr long long SZ = 2e5 + 7;
long long ma = -1;
constexpr long long inf = 1e18;
int M, N, R, C;
ll mod = 1e9+7;
#define dtb(n, x) bitset<n>(x).to_string()
vector<string> g, pat;
vector<vector<long long>> bit(SZ, vector<long long>(33));
int vis[1005][1005];
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
// char a[1000][1010];
bool isPrime(int a)
{
    if (a <= 1)
        return false;
    if (a <= 3)
        return true;

    if (a % 2 == 0 || a % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= a; i += 6)
    {
        if (a % i == 0 || a % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

ll power(ll a, ll b, ll mod)
{
    if (b == 0)
    {
        return 1;
    }
    ll ans = power(a, b / 2, mod);
    ans *= ans;
    ans %= mod;
    if (b % 2)
    {
        ans *= a;
    }
    return ans % mod;
}

void solve()
{

ll n,m,k,i,cnt;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        ll a[1001],b[1001];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        cnt=0;
        while(1)
        {
            for(i=0; i<n; i++)
            {
                if(b[i]>=a[i])
                {
                    b[i]-=a[i];
                }
                else
                {
                    m=m-(a[i]-b[i]);
                    b[i]=0;
                }
            }
            if(m>=0)
                cnt++;
            else
                break;
        }
        cout<<cnt<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 1;
    // cin >> n;
    int i = 1;
    while (n--)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
        // i++;
    }

    return 0;
}