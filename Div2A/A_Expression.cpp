/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    17:33:01 03-Jun-2022
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
    ll a, b, c; 
    cin >> a >> b >> c;
    ll d = a+b+c;
    ll e = a+(b*c); 
    ll f = (a+b)*c; 
    ll g = (a*b)+c; 
    ll h = a*(b+c); 
    ll i = a*b*c;
    cout << max(d, max(e, max(f, max(g, max(h, i)))));
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