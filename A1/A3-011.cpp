// problem: A3-011
// difficulty: 2.5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    vector <int> a(n); for (auto &e : a) cin >> e;
    set <int> s;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            s.insert(sum);
        }
    }
    cout << s.size();
}
