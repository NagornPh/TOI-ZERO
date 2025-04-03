// problem: A3-022
// difficulty: 1/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    int num = floor(sqrt(n));
    if (num * num == n) num--;
    cout << num * 2 - (num % 2 == n % 2);
}