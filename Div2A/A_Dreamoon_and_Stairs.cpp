/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    07:35:12 04-Jun-2022
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
    ll n, m, ans{-1};
    cin >> n >> m;
    ll q{n/2}, r{n%2};
    while (q >= 0)
    {
        // cout << q <<' ' << r << ' '<< ans << ' ' << endl;
        if ((q+r) % m)
        {
            q--;
            r+=2;
        }
        else
        {
            ans = q+r;
            break;
        }
    }
    cout << ans;
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