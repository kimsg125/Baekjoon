#include <bits/stdc++.h>
using namespace std;

int H, W, N, M;

void solve() {
    cin >> H >> W >> N >> M;
    int x=H/(N+1), y=W/(M+1);
    if (H%(N+1)!=0) x++;
    if (W%(M+1)!=0) y++;
    cout << x*y;
}

int main() {
    solve();
}