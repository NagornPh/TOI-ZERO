// problem: A3-016
// difficulty: 5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, m;  cin >> n >> m;
    vector <int> adj[n + 1];
    vector <int> go(m + 1), in(m + 1); 
    for (int i = 1; i <= m; i++){
        int k; 
        cin >> k;
        in[i] = k;
        for (int j = 0; j < k; j++) {
            int e; cin >> e;
            adj[e].emplace_back(i);
        }
        cin >> go[i];
    }
    vector <bool> on(n + 1); on[1] = true;
    queue <int> q; q.emplace(1);
    int ans = 1; 
    while (!q.empty()){
        auto u = q.front(); q.pop();
        for (auto v : adj[u]){
            if (--in[v] == 0) {
                if (!on[go[v]]) {
                    on[go[v]] = true;
                    ans++;
                    q.emplace(go[v]);
                }
            }
        }
    }
    cout << ans;
}