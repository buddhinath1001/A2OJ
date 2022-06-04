/*
योग: कर्मसु कौशलम्
author:     buddhimevriddhi
created:    06:35:51 04-Jun-2022
*/

#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
typedef long double ld;

ll f(ll x)
{
    return (x < 0 ? -x : x) ;
}
void solve()
{
    ll x1, x2, x3, x4, y1, y2, y3, y4, s;
    cin >> x1 >> y1 >> x2 >> y2;

    bool isSquare{true};
    // case-1 and case-3 y = constant
    if (y1 == y2)
    {
        s = f(x1 - x2);
        y3 = y1 + s, y4 = y3, x3 = x1, x4 = x2;        
    }
    // case-2 and case-4 x = constant
    else if (x1 == x2)
    {
        s = f(y1 - y2);
        x3 = x1 + s, x4 = x3, y3 = y1, y4 = y2;
    }
    else
    {
        isSquare = (f(x1-x2) == f(y1 - y2));
        if ((min(x1, x2) == x1 and min(y1, y2) == y1) or (min(y1, y2) == y2 and min(x1, x2) == x2))
        {
            x3 = min(x1, x2) , y3 = max(y1, y2), x4 = max(x1, x2), y4 = min(y1, y2);
        }
        else
        {
            x3 = min(x1, x2) , y3 = min(y1, y2), x4 = max(x1, x2), y4 = max(y1, y2);
        }   
    }
    
    
    if (isSquare)
    {
        cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << endl;
    }
    else  cout << -1 << endl;
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