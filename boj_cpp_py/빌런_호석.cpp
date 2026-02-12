#include <bits/stdc++.h>
using namespace std;

int N, K, P, X;//N층 K자리수 반전최대P 실제층X
int led[10][7]={{1,1,1,0,1,1,1},{0,0,1,0,0,1,0},{1,0,1,1,1,0,1},{1,0,1,1,0,1,1},{0,1,1,1,0,1,0},
                {1,1,0,1,0,1,1},{1,1,0,1,1,1,1},{1,0,1,0,0,1,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};

void solve() {
    cin >> N >> K >> P >> X;
    vector<vector<int>> rev(10, vector<int> (10,0));//i에서 j로 바꿀때 반전 개수
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (led[i][k]!=led[j][k]) rev[i][j]++;
            }
        }
    }
    int cnt=0;
    for (int i = 1; i <= N; i++)
    {
        int rev_cnt=0;
        for (int j = 0; j < K; j++)
        {
            rev_cnt+=rev[(X/int(pow(10,j)))%10][(i/int(pow(10,j)))%10];
        }
        if (rev_cnt<=P && rev_cnt>=1) cnt++;
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}