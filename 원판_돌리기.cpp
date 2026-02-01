#include <bits/stdc++.h>
using namespace std;

int N, M, T, x, d, k;
int Map[51][51], tmp_Map[51][51];

double get_avg()
{
    double sum=0, cnt=0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (Map[i][j]==-1) continue;
            sum+=Map[i][j];
            cnt++;
        }
    }
    return sum/cnt;
}

int get_sum()
{
    int sum=0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (Map[i][j]==-1) continue;
            sum+=Map[i][j];
        }
    }
    return sum;
}

void reset_tmp()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            tmp_Map[i][j]=0;
        }
    }
}

void tmp_to_Map()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (tmp_Map[i][j]==-1) Map[i][j]=-1;
        }
    }
}

void solve()
{
    cin >> N >> M >> T;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> Map[i][j];
        }
    }
    for (int t = 0; t < T; t++)
    {
        cin >> x >> d >> k;
        for (int i = 1; i <= N; i++)
        {
            if (i%x!=0) continue;
            int cnt=0;
            while (cnt!=k)
            {
                if (d==0)
                {
                    int tmp=Map[i][M];
                    for (int j = M; j >= 2; j--)
                    {
                        Map[i][j]=Map[i][j-1];
                    }
                    Map[i][1]=tmp;
                }
                else
                {
                    int tmp=Map[i][1];
                    for (int j = 1; j <= M-1; j++)
                    {
                        Map[i][j]=Map[i][j+1];
                    }
                    Map[i][M]=tmp;
                }
                cnt++;
            }
        }
        reset_tmp();
        bool change=false;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M-1; j++)
            {
                if (Map[i][j]<0) continue;
                if (Map[i][j]==Map[i][j+1])
                {
                    tmp_Map[i][j]=-1;
                    tmp_Map[i][j+1]=-1;
                    change=true;
                }
            }
            if (Map[i][M]<0) continue;
            if (Map[i][M]==Map[i][1])
            {
                tmp_Map[i][M]=-1;
                tmp_Map[i][1]=-1;
                change=true;
            }
        }
        for (int i = 1; i <= N-1; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                if (Map[i][j]<0) continue;
                if (Map[i][j]==Map[i+1][j])
                {
                    tmp_Map[i][j]=-1;
                    tmp_Map[i+1][j]=-1;
                    change=true;
                }
            }
        }
        if (change) tmp_to_Map();
        else
        {
            double avg=get_avg();
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= M; j++)
                {
                    if (Map[i][j]==-1) continue;
                    if (Map[i][j]>avg) Map[i][j]--;
                    else if (Map[i][j]<avg) Map[i][j]++;
                }
            }
        }
    }
    cout << get_sum();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}