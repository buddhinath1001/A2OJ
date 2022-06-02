/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    10:34:57 01-Jun-2022
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
    string a, b ;
    cin >> a >> b;
    auto l = [](auto &x){return x = tolower(x);};
    for_each(begin(a), end(a), l);
    for_each(begin(b), end(b), l);
    cout << (a < b ? -1 : (a > b ? 1 : 0));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // ll test{}; cin >> test; while(test--)
    {
        solve();
        #ifdef ONPC
        cout << "__________________________" << endl;
        #endif
    }

    #ifdef ONPC
    cerr << endl << "execution time is " << clock() * 1000.0 / CLOCKS_PER_SEC << " miliseconds." << endl;
    #endif
}