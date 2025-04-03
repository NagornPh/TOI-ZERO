// problem: A3-012
// difficulty: 0.5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, s; cin >> n >> s;
    vector <int> a(n + 1); for (int i = 1; i <= n; i++) cin >> a[i];
    vector <bool> visited(n + 1); visited[s] = true;
    queue <int> q; q.emplace(s);
    int ans = 1;
    while (!q.empty()) {
        auto u = q.front(); q.pop();
        if (visited[a[u]] || a[u] == 0) break;
        else {
            visited[a[u]] = true;
            q.emplace(a[u]);
            ans++;
        }
    }
    cout << ans;
}