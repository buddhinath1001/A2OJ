/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    13:32:33 05-Jun-2022
*/

#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
typedef long double ld;

ll f(ll x)
{
    return (x > 0 ? x : -x);
}

void solve()
{
    ll a, b, diff_a{}, diff_b{}, A{}, B{}, draw{};
    cin >> a >> b; 
    for (size_t i = 0; i < 6; i++)
    {
        diff_a = f(i+1-a);
        diff_b = f(i+1-b);
        diff_a < diff_b ? A++ : (diff_a > diff_b ? B++ : draw++);
    }
    cout << A << ' ' << draw << ' ' << B << endl;
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