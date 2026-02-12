#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void preorder(vector<vector<int>>& vv, int p) {
    cout << c[p];
    if (vv[p][0]!=-1) preorder(vv, vv[p][0]);
    if (vv[p][1]!=-1) preorder(vv, vv[p][1]);
}

void inorder(vector<vector<int>>& vv, int p) {
    if (vv[p][0]!=-1) inorder(vv, vv[p][0]);
    cout << c[p];
    if (vv[p][1]!=-1) inorder(vv, vv[p][1]);
}

void postorder(vector<vector<int>>& vv, int p) {
    if (vv[p][0]!=-1) postorder(vv, vv[p][0]);
    if (vv[p][1]!=-1) postorder(vv, vv[p][1]);
    cout << c[p];
}

void solve() {
    char x, y, z;
    cin >> N;
    vector<vector<int>> vv(N,vector<int> ());
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y >> z;
        if (y!='.') vv[x-'A'].push_back(y-'A');
        else vv[x-'A'].push_back(-1);
        if (z!='.') vv[x-'A'].push_back(z-'A');
        else vv[x-'A'].push_back(-1);
    }
    preorder(vv,0);
    cout << '\n';
    inorder(vv,0);
    cout << '\n';
    postorder(vv,0);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
