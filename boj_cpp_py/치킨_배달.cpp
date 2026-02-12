#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 9223372036854775807;
typedef pair<int,int> pii;

int N, M, x, h;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int chicken_dist(vector<vector<int>>& dist, int house_num, int chicken_num) {
    int city_min_dist=MAX;
    vector<int> open(chicken_num,0);
    for (int i = 0; i < M; i++) open[i]=1;
    do {
        int dist_sum=0;
        for (int i = 0; i < house_num; i++)
        {
            int min_dist=MAX;
            for (int j = 0; j < chicken_num; j++)
            {
                if (open[j]==0) continue;
                if (dist[i][j]<min_dist) min_dist=dist[i][j];
            }
            dist_sum+=min_dist;
        }
        if (dist_sum<city_min_dist) city_min_dist=dist_sum;
    } while (prev_permutation(open.begin(),open.end()));
    return city_min_dist;
}

void solve() {
    cin >> N >> M;
    vector<vector<int>> vv(N, vector<int> (N,0));
    vector<pii> house;
    vector<pii> chicken;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            if (x==1) house.push_back({i,j});
            else if (x==2) chicken.push_back({i,j});
            vv[i][j]=x;
        }
    }
    vector<vector<int>> dist(house.size(), vector<int> (chicken.size(),0));
    for (int i = 0; i < house.size(); i++) for (int j = 0; j < chicken.size(); j++) dist[i][j]=abs(house[i].first-chicken[j].first)+abs(house[i].second-chicken[j].second);
    cout << chicken_dist(dist, house.size(), chicken.size());
}
//  1 2 3
//1 1 2 6
//2 2 3 3
//3 2 1 5
//4 2 1 3

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
