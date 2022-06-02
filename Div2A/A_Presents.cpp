/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    13:50:58 01-Jun-2022
*/

#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif

#include <bits/stdc++.h>

#define char unsigned char

using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef long double ld;

void solve()
{
    map<ll, ll> m;
    ll n;
    cin >> n;
    int to;
    for (size_t from = 1; from <=n ; from++)
    {
        cin >> to;
        m[to] = from ;
    }
    for (auto &&i : m)
    {
        cout << i.second << ' ';
    }
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