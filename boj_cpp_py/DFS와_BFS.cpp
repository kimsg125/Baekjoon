<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<vector<int>> A;
set<int> B,C;
deque<int> D;

int DFS(int p) {
    B.insert(p);
    cout << p << ' ';
    for (int i = 0; i < A[p-1].size(); i++) if (B.find(A[p-1][i])==B.end()) DFS(A[p-1][i]);
    return 0;
}

int BFS(int p) {
    C.insert(p);
    D.push_back(p);
    cout << p << ' ';
    while (!D.empty())
    {
        int a = D.front();
        D.pop_front();
        for (int i = 0; i < A[a-1].size(); i++)
        {
            if (C.find(A[a-1][i])==C.end())
            {
                C.insert(A[a-1][i]);
                D.push_back(A[a-1][i]);
                cout << A[a-1][i] << ' ';
            }
        }
    }
    return 0;
}

void solve() {
    int N, M, V, a, b, cnt=0;
    cin >> N >> M >> V;
    for (int i = 0; i < N; i++)
    {
        vector<int> A2;
        A.push_back(A2);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        A[a-1].push_back(b);
        A[b-1].push_back(a);
    }
    for (int i = 0; i < N; i++)
    {
        sort(A[i].begin(),A[i].end());
    }
    DFS(V);
    cout << '\n';
    BFS(V);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
=======
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<vector<int>> A;
set<int> B,C;
deque<int> D;

int DFS(int p) {
    B.insert(p);
    cout << p << ' ';
    for (int i = 0; i < A[p-1].size(); i++) if (B.find(A[p-1][i])==B.end()) DFS(A[p-1][i]);
    return 0;
}

int BFS(int p) {
    C.insert(p);
    D.push_back(p);
    cout << p << ' ';
    while (!D.empty())
    {
        int a = D.front();
        D.pop_front();
        for (int i = 0; i < A[a-1].size(); i++)
        {
            if (C.find(A[a-1][i])==C.end())
            {
                C.insert(A[a-1][i]);
                D.push_back(A[a-1][i]);
                cout << A[a-1][i] << ' ';
            }
        }
    }
    return 0;
}

void solve() {
    int N, M, V, a, b, cnt=0;
    cin >> N >> M >> V;
    for (int i = 0; i < N; i++)
    {
        vector<int> A2;
        A.push_back(A2);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        A[a-1].push_back(b);
        A[b-1].push_back(a);
    }
    for (int i = 0; i < N; i++)
    {
        sort(A[i].begin(),A[i].end());
    }
    DFS(V);
    cout << '\n';
    BFS(V);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
