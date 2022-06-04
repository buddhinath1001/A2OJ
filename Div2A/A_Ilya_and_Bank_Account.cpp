/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    05:36:17 04-Jun-2022
*/

#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
typedef long double ld;

ll f (ll x)
{
    return (x > 0 ? x : -x);
}
void solve()
{
    ll n;
    cin >> n;

    cout << (n > 0 ? n : -1 * min(f(n)/10, (f(n)/100) * 10 + (f(n)%10)));
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