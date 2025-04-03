// problem: A3-022
// difficulty: 5/5

#include <bits/stdc++.h>

using namespace std;

int ans = 0;

int dfs(int u, vector <vector <pair <int, int>>> &adj) {
    int left = 0, right = 0;
    auto [d1, v1] = adj[u][0];
    if (d1) left = v1;
    else left = dfs(v1, adj);
    auto [d2, v2] = adj[u][1];
    if (d2) right = v2;
    else right = dfs(v2, adj);
    ans += abs(left - right);
    return max(left, right) * 2;
}

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    vector <vector <pair <int, int>>> adj(n + 1);
    for (int i = 1; i <= n; i++) {
        int a, l, b, r; 
        cin >> a >> l >> b >> r;
        adj[i].emplace_back(a, l);
        adj[i].emplace_back(b, r);
    }
    dfs(1, adj);
    cout << ans;
}