/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    13:40:39 05-Jun-2022
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
    ll n, smallest_of_largest {INT_MAX}, largest{}, dif{};
    cin >> n;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
 
    for (size_t i = 1; i <= n-2; i++)
    {
        largest = INT_MIN;
        for (size_t j = 1; j <= n-1; j++)
        {
            dif = (i == j ? v[j+1] : v[j]) - v[j-1];
            if (dif > largest)
            {
                largest = dif;
            }
        }
        if (largest < smallest_of_largest)
        {
            smallest_of_largest = largest;
        }
    }
    cout << smallest_of_largest << endl;
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