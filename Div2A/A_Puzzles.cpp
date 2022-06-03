/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    17:03:38 03-Jun-2022
*/

#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m, 0);
    for (auto &&i : a)
    {
        cin >> i;
    }
    ll smallest{INT_MAX};
    sort(begin(a), end(a), less<ll>());
    for (size_t i = 0; i <= m-n; i++)
    {
        ll t {a[i+n-1] - a[i]};
        if (t < smallest)
        {
            smallest = t;
        }
    }
    cout << smallest << endl;
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