/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    21:16:24 03-Jun-2022
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
    ll n, p, q;
    cin >> n >> p;
    vector<bool> v(n, false);
    int x;
    for (size_t i = 0; i < p; i++)
    {
        cin >> x;
        v[x -1] = true;
    }
    cin >> q; 
    for (size_t i = 0; i < q; i++)
    {
        cin >> x;
        v[x-1] = true;
    }

    string Y{"I become the guy."}, N{"Oh, my keyboard!"};
    bool predicate {all_of(begin(v), end(v), [](auto t){return t == true;})};
    cout << (predicate ? Y : N) << endl;
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