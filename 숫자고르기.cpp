#include <bits/stdc++.h>
using namespace std;

int N;

void solve() {
    cin >> N;
    vector<int> v(N+1,0), check(N+1,0);//1:루프시작 2:루프중간 3:루프성공
    int cnt=0;
    for (int i = 1; i <= N; i++)
    {
        cin >> v[i];
        if (i==v[i])
        {
            check[i]=3;
            cnt++;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (check[i]==3) continue;
        deque<int> q;
        q.push_back(i);
        check[i]=1;
        bool fail=false;
        while (1)
        {
            int next=v[q.back()];
            if (check[next]==2 || check[next]==3)
            {
                fail=true;
                break;
            }
            else if (check[next]==1) break;
            else
            {
                q.push_back(next);
                check[q.back()]=2;
            }
        }
        while (!q.empty())
        {
            if (fail) check[q.front()]=0;
            else
            {
                check[q.front()]=3;
                cnt++;
            }
            q.pop_front();
        }
    }
    cout << cnt << '\n';
    for (int i = 1; i <= N; i++)
    {
        if (check[i]==3) cout << i << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}