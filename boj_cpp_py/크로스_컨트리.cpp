#include <bits/stdc++.h>
using namespace std;

int N, n;

void solve() {
    cin >> N;
    vector<int> num_cnt(201,0);
    vector<int> score_cnt(201,0);
    vector<int> fifth(201,0);
    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        cin >> n;
        v.push_back(n);
        num_cnt[n]++;
        if (num_cnt[n]==5) fifth[n]=i;
    }
    int rank=0;
    for (int i = 0; i < N; i++)
    {
        if (num_cnt[v[i]]!=6) continue;
        rank++;
        if (i>=fifth[v[i]]) continue;
        score_cnt[v[i]]+=rank;
    }
    int min_score=100000000, min_team=0;
    for (int i = 1; i < 201; i++)
    {
        if (score_cnt[i]==0 || score_cnt[i]>min_score) continue;
        if (score_cnt[i]<min_score)
        {
            min_score=score_cnt[i];
            min_team=i;
        }
        else if (score_cnt[i]==min_score)
        {
            if (fifth[i]<fifth[min_team])
            {
                min_score=score_cnt[i];
                min_team=i;
            }
        }
    }
    cout << min_team << '\n';
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
    }
}