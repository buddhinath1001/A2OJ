/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    10:25:20 04-Jun-2022
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
    ll n, x, one{}, two{}, three{};
    cin >> n;
    vector<ll> adj[4];
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        adj[x].push_back(i);
        (x == 1 ? one++ : (x == 2 ? two++ : three++));
    }
    ll teams {min(one, min(two, three))};
    cout << teams << endl;

    for (size_t i = 0; i < teams; i++)
    {
        cout << adj[1].at(i)+1 << ' ' << adj[2].at(i)+1 << ' ' << adj[3].at(i)+1 << endl;
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