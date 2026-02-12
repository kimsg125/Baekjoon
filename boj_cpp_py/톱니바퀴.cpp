#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int K, n, m, tmp;
string s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void rotr(vector<int>& gear)
{
    tmp=gear[7];
    for (int i = 7; i > 0; i--)
    {
        gear[i]=gear[i-1];
    }
    gear[0]=tmp;
}

void rotl(vector<int>& gear)
{
    tmp=gear[0];
    for (int i = 0; i < 7; i++)
    {
        gear[i]=gear[i+1];
    }
    gear[7]=tmp;
}

void solve() {
    vector<vector<int>> gear(4, vector<int> (8,0));
    for (int i = 0; i < 4; i++)
    {
        cin >> s;
        for (int j = 0; j < 8; j++)
        {
            gear[i][j] = s[j] - '0';
        }
    }
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> n >> m;
        vector<int> R(4, 0);
        R[n-1] = m;
        for (int j = n-1; j > 0; j--)
        {
            if (gear[j][6] != gear[j-1][2]) 
                R[j-1] = -R[j];
            else
                break;
        }
        for (int j = n-1; j < 3; j++)
        {
            if (gear[j][2] != gear[j+1][6]) 
                R[j+1] = -R[j];
            else
                break;
        }
        for (int j = 0; j < 4; j++)
        {
            if (R[j] == 1)
                rotr(gear[j]);
            else if (R[j] == -1)
                rotl(gear[j]);
        }
    }
    int sum = 0;
    int p[4] = {1, 2, 4, 8};
    for (int i = 0; i < 4; i++)
    {
        if (gear[i][0] == 1)
            sum += p[i];
    }
    cout << sum;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
