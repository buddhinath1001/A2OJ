/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    14:16:49 01-Jun-2022
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
    ll n, m{INT_MAX}, M{INT_MIN}, mIndex{}, MIndex{};
    cin >> n;
    deque<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    for (size_t i = 0; i < n; i++)
    {
        if(v[i] > M)
        {
            M = v[i], MIndex = i;
        }
        if(v[i] <= m)
        {
            m = v[i], mIndex = i;
        }
    }

    ll ans = MIndex + n - 1 - mIndex;
    cout << (MIndex < mIndex ? ans : ans - 1) << endl;
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