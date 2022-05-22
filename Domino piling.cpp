#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    cout << (m + n == 2 ? 0 : (m * n) / 2) << endl;
}

C++

m, n = map(int, input().split())
if m == 1 and n == 1:
    print(0)
else:
    print(int(m * n) // 2)
