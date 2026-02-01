#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, n, m;
string s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    vector<vector<int>> cl(N,vector<int> (N,0));
    vector<vector<int>> l(N*N+1,vector<int> (N*N+1,0));
    for (int i = 0; i < N*N; i++)
    {
        vector<vector<int>> l_cl(N,vector<int> (N,0)), emp_cl(N,vector<int> (N,0));
        cin >> n;
        for (int j = 0; j < 4; j++)
        {
            cin >> m;
            l[n][m] = 1;
        }

        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (cl[j][k]!=0) continue;
                for (int p = 0; p < 4; p++)
                {
                    int x = j + dx[p];
                    int y = k + dy[p];
                    if (x < 0 || y < 0 || x >= N || y >= N) continue;
                    
                    if (cl[x][y] != 0 && l[n][cl[x][y]] == 1) l_cl[j][k]++;
                    if (cl[x][y] == 0) emp_cl[j][k]++;
                }
            }
        }

        int max_x, max_y, max = -1;
        bool mul = false;
        vector<pii> mul_list;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (cl[j][k]!=0) continue;
                if (l_cl[j][k]>max)
                {
                    max = l_cl[j][k];
                    max_x = j;
                    max_y = k;
                    mul = false;
                    mul_list.clear();
                    mul_list.push_back(make_pair(j,k));
                }
                else if (l_cl[j][k]==max)
                {
                    mul_list.push_back(make_pair(j,k));
                    mul = true;
                }
            }
        }
        if (mul=false)
        {
            cl[max_x][max_y] = n;
            continue;
        }

        max = -1;
        for (int j = 0; j < mul_list.size(); j++)
        {
            if (cl[mul_list[j].first][mul_list[j].second]!=0) continue;
            if (emp_cl[mul_list[j].first][mul_list[j].second]>max)
            {
                max = emp_cl[mul_list[j].first][mul_list[j].second];
                max_x = mul_list[j].first;
                max_y = mul_list[j].second;
            }
        }
        cl[max_x][max_y] = n;
    }

    int total = 0;
    vector<int> score = {0,1,10,100,1000};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int cnt = 0;
            for (int p = 0; p < 4; p++)
            {
            int x = i + dx[p];
            int y = j + dy[p];
            if (x < 0 || y < 0 || x >= N || y >= N) continue;

            if (l[cl[i][j]][cl[x][y]]==1) cnt++;
            }
            total += score[cnt];
        }
    }
    cout << total;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
