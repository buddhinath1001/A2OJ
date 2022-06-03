/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    16:46:27 03-Jun-2022
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
    vector<ll> a(n), b(n), c(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    ll A, B, C ;
    A = accumulate(begin(a), end(a), 0);
    B = accumulate(begin(b), end(b), 0);
    C = accumulate(begin(c), end(c), 0);
    bool condition {A == 0 and B == 0 and C == 0};
    cout << (condition ? "YES" : "NO");
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