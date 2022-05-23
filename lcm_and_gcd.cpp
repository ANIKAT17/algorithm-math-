#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;
vector<ll> prime;
// returns maximum of 3 no.s -> (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

bool comp(pr &a, pr &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

bool isprime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void sieve()
{

    vector<bool> vis(10001, true);

    for (ll p = 2; p * p <= 10001; p++)
    {

        if (vis[p] == true)
        {

            for (ll i = p * p; i <= 10001; i += p)
                vis[i] = false;
        }
    }

    for (ll p = 2; p <= 10001; p++)
        if (vis[p])
            prime.push_back(p);
}
bool issorted(vector<ll> a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int flag = 0;
    ll sum = 0, maxi = INT_MIN, mini = INT_MAX;
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << (a * b) / gcd(a, b) << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll t = 1;
    // sieve();
    cin >> t;
    while (t--)
    {
        solve();
    }
}
