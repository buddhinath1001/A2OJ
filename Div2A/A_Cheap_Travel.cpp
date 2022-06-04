/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    05:30:05 04-Jun-2022
*/

#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
typedef long double ld;

ll f(ll u, ll v)
{
    return (u%v ? 1 + (u/v) : u/v);
}

void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b; 
    cout << min(n*a, min(f(n,m)*b, b*(n/m) + a*(n%m))) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // ll test{}; cin >> test; while(test--)
    {
        solve();
        #ifdef ONPC
        cout << endl << "__________________________" << endl;
        #endif
    }

    #ifdef ONPC
    cerr << endl << "execution time is " << clock() * 1000.0 / CLOCKS_PER_SEC << " miliseconds." << endl;
    #endif
}