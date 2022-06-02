/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    10:49:29 01-Jun-2022
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
    string s;
    cin >> s;
    
    ll one = count(s.begin(), s.end(), '1');
    ll two = count(s.begin(), s.end(), '2');
    ll three = count(s.begin(), s.end(), '3');
    
    string ans;
    for (size_t i = 0; i < one; i++)
    {
        ans.push_back('1');
        ans.push_back('+');
    }
    for (size_t i = 0; i < two; i++)
    {
        ans.push_back('2');
        ans.push_back('+');
    }
    for (size_t i = 0; i < three; i++)
    {
        ans.push_back('3');
        ans.push_back('+');
    }
    for (size_t i = 0; i < sz(ans)-1; i++)
    {
        cout << ans[i];
    }
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