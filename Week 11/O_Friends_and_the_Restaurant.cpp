#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    int n;
    cin >> n;
    vector< int > v(n), x(n), diff(n);
    for(int &i : v) cin >> i;
    for(int &i : x) cin >> i;
    
    for(int i = 0; i < n; i++){
        diff[i] = x[i] - v[i];
    }
    sort(diff.begin(), diff.end());
    int ans = 0, i = 0, j = n - 1;
    while(i < j) {
        if(diff[i] + diff[j] >= 0){
            ans++;
            i++;
            j--;
        }
        else i++;
    } 
    cout << ans << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}