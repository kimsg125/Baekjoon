#include <bits/stdc++.h>
using namespace std;

int N;
char M;
string s;

void solve() {
    cin >> N >> M;
    set<string> s_set;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        s_set.insert(s);
    }
    if (M=='Y') cout << s_set.size();
    else if (M=='F') cout << s_set.size()/2;
    else if (M=='O') cout << s_set.size()/3;
}

int main() {
    solve();
}