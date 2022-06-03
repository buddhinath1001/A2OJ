/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    21:08:31 03-Jun-2022
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
    char str[1001];
    scanf("%[^\n]", str);
    unordered_set<char> S;
    bool predicate;
    for (size_t i = 0; i < strlen(str); i++)
    {
        predicate = (str[i] == '{' or str[i] == ',' or str[i] == ' ' or str[i] == '}');
        if (!predicate)
        {
            S.insert(str[i]);
        }
    }
    cout << S.size() << endl;
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