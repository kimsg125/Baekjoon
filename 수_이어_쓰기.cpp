#include <bits/stdc++.h>
using namespace std;

string s;

void solve() {
    cin >> s;
    int cnt=0, num=1;
    while (1)
    {
        if (cnt>=s.size()) break;
        string n=to_string(num);
        for (int i = 0; i < n.size(); i++)
        {
            if (cnt>=s.size()) break;
            if (s[cnt]==n[i]) cnt++;
        }
        num++;
    }
    cout << num-1;
}

int main() {
    solve();
}