/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    07:28:00 06-Jun-2022
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
    ll l, r, a, b, c;
    bool flag {false};
    cin >> l >> r;
    for (size_t i = l; i <= r; i++)
    {
        for (size_t j = i+1; j <= r; j++)
        {
            for (size_t k = j+1; k <= r; k++)
            {
                if (gcd(i,j) == 1 and gcd(j, k) == 1 and gcd(i,k) != 1)
                {
                    a = i, b = j, c = k;
                    flag = true;
                }
            }
        }
    }
    if (flag)
    {
        printf("%lld %lld %lld\n", a, b, c);
    }
    else cout << -1 << endl;
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