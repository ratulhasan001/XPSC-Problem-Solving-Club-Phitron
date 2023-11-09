#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n;
        string s;
        cin >> n >> s;
        int z = 0, o = 0;
        for(char c : s) (c == '1' ? o++ : z++);
        cout << (min(z, o) % 2 == 0? "Ramos" : "Zlatan") << '\n';
    }
    return 0;
}