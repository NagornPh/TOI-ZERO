// problem: A3-022
// difficulty: 3/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    priority_queue <int, vector <int>, greater <int>> pq;
    for (int i = 1; i <= 200; i++) {
        for (int j = 1; j < 10; j++) {
            pq.emplace(2 * i);
        }
        pq.emplace(i);
    }
    priority_queue <int> q;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        q.emplace(x);
    }
    int ans = 0;
    while (!q.empty()) ans += q.top() * pq.top(), q.pop(), pq.pop();
    cout << ans;
}