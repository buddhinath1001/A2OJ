/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    11:28:32 05-Jun-2022
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
    ll x;
    pair<ll, ll> odd{0,0}, even{0,0};
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        if (x%2)
        {
            odd.first++;
            odd.second = i;
        }
        else
        {
            even.first++;
            even.second = i;
        }
    }
    cout << (odd.first == 1 ? odd.second : even.second) + 1 << endl;
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