#include <bits/stdc++.h>
using namespace std;

int N;
string s1, s2, tmp;

void solve() {
    cin >> N >> s1 >> s2;
    int cnt=1, min_cnt=100001;
    tmp=s1;
    tmp[0]=(tmp[0]=='0')?'1':'0';
    tmp[1]=(tmp[1]=='0')?'1':'0';
    for (int i = 1; i < N; i++)
    {
        if (tmp[i-1]!=s2[i-1])
        {
            tmp[i-1]=(tmp[i-1]=='0')?'1':'0';
            tmp[i]=(tmp[i]=='0')?'1':'0';
            if (i!=N-1) tmp[i+1]=(tmp[i+1]=='0')?'1':'0';
            cnt++;
        }
    }
    if (tmp[N-1]==s2[N-1] && cnt<min_cnt) min_cnt=cnt;

    cnt=0;
    tmp=s1;
    for (int i = 1; i < N; i++)
    {
        if (tmp[i-1]!=s2[i-1])
        {
            tmp[i-1]=(tmp[i-1]=='0')?'1':'0';
            tmp[i]=(tmp[i]=='0')?'1':'0';
            if (i!=N-1) tmp[i+1]=(tmp[i+1]=='0')?'1':'0';
            cnt++;
        }
    }
    if (tmp[N-1]==s2[N-1] && cnt<min_cnt) min_cnt=cnt;
    if (min_cnt==100001) cout << -1;
    else cout << min_cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}