#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef pair<string,int> pis;

int p, m, l;
string n;

void solve() {
    cin >> p >> m;
    vector<pii> room(p, make_pair(0,0)); // people_num, level
    vector<vector<pis>> name(p, vector<pis> (m));
    for (int i = 0; i < p; i++)
    {
        cin >> l >> n;
        for (int j = 0; j < p; j++)
        {
            if (room[j].first==0)
            {
                name[j][0]=make_pair(n,l);
                room[j].first++;
                room[j].second=l;
                break;
            }
            if (room[j].first==m) continue;
            if (l>=room[j].second-10 && l<=room[j].second+10)
            {
                name[j][room[j].first]=make_pair(n,l);
                room[j].first++;
                break;
            }
        }
    }
    for (int i = 0; i < p; i++)
    {
        if (room[i].first==0) break;
        if (room[i].first==m) cout << "Started!\n";
        else cout << "Waiting!\n";
        sort(name[i].begin(),name[i].begin()+room[i].first);
        for (int j = 0; j < room[i].first; j++)
        {
            cout << name[i][j].second << ' ' << name[i][j].first << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}