#include <bits/stdc++.h>
 
using i64 = long long;
 
void solve() {
    int n, m, k;
    std::cin >> n >> m >> k;
    
    if (k < n + m - 2 || (k + n + m) % 2 != 0) {
        std::cout << "NO\n";
        return;
    }
    std::cout << "YES\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            int x = (i + j) % 2;
            if (i == 0 && j == 0) {
                x ^= 1;
            }
            std::cout << "RB"[x] << " \n"[j == m - 2];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            int x = (i + j) % 2;
            if (i == 0 && j == 1) {
                x ^= 1;
            }
            std::cout << "RB"[x] << " \n"[j == m - 1];
        }
    }
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}