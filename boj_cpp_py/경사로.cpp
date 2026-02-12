#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N, L, cnt=0;
int Map[100][100];

int row_check(int i) {
    vector<int> v(N,0);
    int bef=Map[i][0];
    for (int j = 1; j < N; j++)
    {
        if (Map[i][j]-bef>1 || bef-Map[i][j]>1) return 0;
        if (Map[i][j]-bef==1)
        {
            for (int k = 1; k < L+1; k++)
            {
                if (j-k<0 || Map[i][j-k]!=bef || v[j-k]==1) return 0;
                v[j-k]=1;
            }
        }
        if (bef-Map[i][j]==1)
        {
            for (int k = 0; k < L; k++)
            {
                if (j+k>N-1 || Map[i][j+k]!=Map[i][j]) return 0;
                v[j+k]=1;
            }
        }
        bef=Map[i][j];
    }
    return 1;
}

int col_check(int i) {
    vector<int> v(N,0);
    int bef=Map[0][i];
    for (int j = 1; j < N; j++)
    {
        if (Map[j][i]-bef>1 || bef-Map[j][i]>1) return 0;
        if (Map[j][i]-bef==1)
        {
            for (int k = 1; k < L+1; k++)
            {
                if (j-k<0 || Map[j-k][i]!=bef || v[j-k]==1) return 0;
                v[j-k]=1;
            }
        }
        if (bef-Map[j][i]==1)
        {
            for (int k = 0; k < L; k++)
            {
                if (j+k>N-1 || Map[j+k][i]!=Map[j][i]) return 0;
                v[j+k]=1;
            }
        }
        bef=Map[j][i];
    }
    return 1;
}

void solve() {
    cin >> N >> L;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> Map[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        cnt+=row_check(i);
    }
    for (int i = 0; i < N; i++)
    {
        cnt+=col_check(i);
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}