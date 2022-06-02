/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    11:03:44 01-Jun-2022
*/

#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif

#include <bits/stdc++.h>

#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    deque<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    ll s = accumulate(v.begin(), v.end(), 0, plus<ll>());
    sort(v.begin(), v.end(), greater<ll>());
    
    ll coin{}, t{};
    while (t<=s)
    {
        t += v[coin];
        s -= v[coin];
        coin++;
    }
    
    cout << coin << endl;
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