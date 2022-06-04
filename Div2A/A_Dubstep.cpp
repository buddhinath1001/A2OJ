/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    14:31:57 04-Jun-2022
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
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
        {
            s[i]=s[i+1]=s[i+2]=' ';
        }
    }
    if (s[0] != ' ')
    {
        cout << s[0];
    }
    
    for (size_t i = 1; i < s.size(); i++)
    {
        if (s[i-1] == ' ' and s[i] == ' ')
        {
            continue;
        }
        cout << s[i];
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