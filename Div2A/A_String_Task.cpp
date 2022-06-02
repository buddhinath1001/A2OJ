/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    10:08:26 01-Jun-2022
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
    string s, ans;
    cin >> s;
    for_each(s.begin(), s.end(), [](auto &x){return x = tolower(x);});
    for (size_t i = 0; i < sz(s); i++)
    {
        char x = s[i];
        bool isVowel {x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u' or x == 'y'};
        if(!isVowel)
        {
            ans.push_back('.'), ans.push_back(x);
        }
    }
    
    cout << ans << endl;
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