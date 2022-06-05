/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    14:44:48 05-Jun-2022
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
    ll n, x;
    cin >> n;
    map<ll, pair<ll, string>> m;
    m[0].second = "chest", m[1].second = "biceps", m[2].second = "back";
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        m[i%3].first += x;
    }
    
    auto myMax = [](auto u, auto v)
    {
        return (u.first > v.first ? u : v);
    };

    auto ans = myMax(m[0], myMax(m[1], m[2]));
    cout << ans.second << endl;
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