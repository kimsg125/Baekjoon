#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

int N, M, K, x, y, z;
vector<int> tree[10][10];
int food[10][10];
int add_food[10][10];

void spring_summer() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int num_tree=tree[i][j].size();
            if (num_tree==0) continue;
            if (num_tree>1) sort(tree[i][j].begin(),tree[i][j].end());
            int cnt=0;
            for (int k = 0; k < num_tree; k++)
            {
                if (tree[i][j][k]>food[i][j]) break;
                food[i][j]-=tree[i][j][k];
                tree[i][j][k]++;
                cnt++;
            }
            for (int k = 0; k < num_tree-cnt; k++)
            {
                food[i][j]+=tree[i][j].back()/2;
                tree[i][j].pop_back();
            }
        }
    }
}

void fall() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (tree[i][j].size()==0) continue;
            for (int k = 0; k < tree[i][j].size(); k++)
            {
                if (tree[i][j][k]%5==0)
                {
                    for (int l = 0; l < 8; l++)
                    {
                        int xx=i+dx[l], yy=j+dy[l];
                        if (xx<0 || xx>=N || yy<0 || yy>=N) continue;
                        tree[xx][yy].push_back(1);
                    }
                }
            }
        }
    }
}

void winter() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            food[i][j]+=add_food[i][j];
        }
    }
}

void solve() {
    cin >> N >> M >> K;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            food[i][j]=5;
            cin >> add_food[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        cin >> x >> y >> z;
        tree[x-1][y-1].push_back(z);
    }
    for (int i = 0; i < K; i++)
    {
        spring_summer();
        fall();
        winter();
    }
    int cnt=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cnt+=tree[i][j].size();
        }
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}