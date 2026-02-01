#include <bits/stdc++.h>
using namespace std;

int N, x, y;
string s;
bool find_head=false;

void solve() {
    cin >> N;
    vector<int> ans(5,0);
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            if (s[j]=='*')
            {
                if (!find_head)
                {
                    x=i+1;
                    y=j;
                    find_head=true;
                }
                else if (i==x)
                {
                    if (j<y) ans[0]++;
                    else if (j>y) ans[1]++;
                }
                else if (i>x)
                {
                    if (j==y) ans[2]++;
                    else if (j<y) ans[3]++;
                    else if (j>y) ans[4]++;
                }
            }
        }
    }
    cout << x+1 << ' ' << y+1 << '\n';
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << ' ';
    }
}

int main() {
    solve();
}