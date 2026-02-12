#include <bits/stdc++.h>
using namespace std;

string s;

void solve() {
    cin >> s;
    int a_cnt=0, b_cnt=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='a') a_cnt++;
    }
    deque<int> q;
    for (int i = 0; i < a_cnt; i++)
    {
        if (s[i]=='a') q.push_back(1);
        else
        {
            q.push_back(2);
            b_cnt++;
        }
    }
    int min_move=b_cnt;
    for (int i = a_cnt; i < s.size(); i++)
    {
        if (s[i]=='a') q.push_back(1);
        else
        {
            q.push_back(2);
            b_cnt++;
        }
        if (q.front()==2) b_cnt--;
        q.pop_front();
        if (b_cnt<min_move) min_move=b_cnt;
    }
    for (int i = 0; i < a_cnt-1; i++)
    {
        if (s[i]=='a') q.push_back(1);
        else
        {
            q.push_back(2);
            b_cnt++;
        }
        if (q.front()==2) b_cnt--;
        q.pop_front();
        if (b_cnt<min_move) min_move=b_cnt;
    }
    cout << min_move;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}