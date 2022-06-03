/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    22:17:22 03-Jun-2022
*/

#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
typedef long double ld;

ll f(ll q)
{
    return (q%2 ? 1+(q>>1) : q>>1);
}

void solve()
{
    ll n, k, q;
    cin >> n >> k;
    q = k - f(n);
    cout << (q > 0 ? q<<1 : (k<<1) - 1);
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