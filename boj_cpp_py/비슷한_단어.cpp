#include <bits/stdc++.h>
using namespace std;

int N, cnt=0;

void solve() {
    cin >> N;
    vector<string> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    int s=0, t=1, max_len=0;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            int cnt=0;
            for (int k = 0; k < min(v[i].size(),v[j].size()); k++)
            {
                if (v[i][k]!=v[j][k]) break;
                else cnt++;
            }
            if (cnt>max_len)
            {
                max_len=cnt;
                s=i;
                t=j;
            }
        }
    }
    cout << v[s] << '\n' << v[t];
}

int main() {
    solve();
}