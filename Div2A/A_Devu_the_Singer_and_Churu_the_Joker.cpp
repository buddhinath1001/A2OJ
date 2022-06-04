/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    14:44:36 04-Jun-2022
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
    ll n, d, t, T{};
    cin >> n >> d;
    for (size_t i = 0; i < n; i++)
    {
        cin >> t;
        T += t;
    }
    T += (n-1) * 10;
    cout << (d < T ? -1 : 2 * (n-1) + (d-T)/5);
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