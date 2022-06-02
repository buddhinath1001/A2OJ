/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    22:27:16 02-Jun-2022
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
    ll n, count{};
    cin >> n;
    deque<ll> home(n, 0), away(n, 0);
    for (size_t i = 0; i < n; i++)
    {
        cin >> home[i] >> away[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (home[i] == away[j])
                {
                    count++;
                }
                
            }
            
        }
        
    }
    cout << count << endl;
    
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