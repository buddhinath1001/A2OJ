/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    11:38:38 05-Jun-2022
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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (auto &&i : v)
    {
        cin >> i.first >> i.second;
    }

    auto descending = [](auto x, auto y){return x.first >= y.first;};
    sort(begin(v), end(v), descending);
    
    bool flag {false};
    for (size_t i = 1; i < n; i++)
    {
        if (v[i].first < v[i-1].first && v[i].second > v[i-1].second)
        {
            flag = true;
            break;
        }
    }
    string Y{"Happy Alex"}, N{"Poor Alex"};
    cout << (flag ? Y : N) << endl;
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