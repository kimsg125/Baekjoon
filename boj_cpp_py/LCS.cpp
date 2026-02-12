#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<int>> vv(s1.size()+1, vector<int> (s2.size()+1,0));

    for (int i = 1; i < s1.size()+1; i++)
    {
        for (int j = 1; j < s2.size()+1; j++)
        {
            if (s1[i-1]!=s2[j-1]) vv[i][j] = max(vv[i-1][j],vv[i][j-1]);
            else vv[i][j]=vv[i-1][j-1]+1;
        }
    }
    cout << vv[s1.size()][s2.size()];
    /*
    cout << '\n';
    for (int i = 1; i < s1.size()+1; i++)
    {
        for (int j = 1; j < s2.size()+1; j++)
        {
            cout << vv[i][j] << ' ';
        }
        cout << '\n';
    }
    */
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
