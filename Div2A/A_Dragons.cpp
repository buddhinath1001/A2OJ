/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    06:58:48 04-Jun-2022
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
    ll s, n, count{};
    cin >> s >> n;
    vector<pair<int, int>> v(n);
    for (auto &&i : v)
    {
        cin >> i.first >> i.second;
    }
    auto sortByFirst = [](auto u, auto v){return u.first < v.first;};
    sort(v.begin(), v.end(), sortByFirst);
    for (size_t i = 0; i < n; i++)
    {
        if (s > v[i].first)
        {
            s += v[i].second;
            count++;
        }
    }
    cout << (count == n ? "YES" : "NO");
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