<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, age;
    string name;
    cin >> N;
    vector<vector<string>> A(201);
    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        A[age].push_back(name);
    }
    for (int i = 1; i < 201; i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << i << ' ' << A[i][j] << '\n';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
=======
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, age;
    string name;
    cin >> N;
    vector<vector<string>> A(201);
    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        A[age].push_back(name);
    }
    for (int i = 1; i < 201; i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << i << ' ' << A[i][j] << '\n';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}