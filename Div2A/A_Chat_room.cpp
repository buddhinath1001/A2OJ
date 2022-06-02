/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    12:12:39 01-Jun-2022
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
    string h, n{"hello"};
    cin >> h;
    ll i{}, j{};
    while (i < h.size())
    {
        if(h[i] == n[j])
        {
            j++;
        }
        i++;
    }
    cout << (j >= 5 ? "YES\n" : "NO\n");
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