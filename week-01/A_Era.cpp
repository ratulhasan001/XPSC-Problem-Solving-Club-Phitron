#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n, ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            ans = max(ans, x - i);
        }
        cout << ans << '\n';
    }
    return 0;
}