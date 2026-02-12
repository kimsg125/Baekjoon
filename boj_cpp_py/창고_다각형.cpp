#include <bits/stdc++.h>
using namespace std;

int N, L, H;
int height[1001];

void solve() {
    cin >> N;
    int max_h=0, left=1000, right=0;
    for (int i = 0; i < N; i++)
    {
        cin >> L >> H;
        height[L]=H;
        if (H>max_h) max_h=H;
        if (L<left) left=L;
        if (L>right) right=L;
    }
    int now_h=height[left], left_stop=right-1;
    for (int i = left; i <= right; i++)
    {
        if (height[i]==max_h)
        {
            left_stop=i;
            break;
        }
        if (height[i]>now_h)
        {
            now_h=height[i];
            continue;
        }
        height[i]=now_h;
    }
    int right_stop=left+1;
    now_h=height[right];
    for (int i = right; i >= left; i--)
    {
        if (height[i]==max_h)
        {
            right_stop=i;
            break;
        }
        if (height[i]>now_h)
        {
            now_h=height[i];
            continue;
        }
        height[i]=now_h;
    }
    for (int i = left_stop; i < right_stop; i++)
    {
        height[i]=max_h;
    }
    int sum=0;
    for (int i = left; i <= right; i++)
    {
        sum+=height[i];
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}