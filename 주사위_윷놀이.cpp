#include <bits/stdc++.h>
using namespace std;

int max_score=0;
int Map[33]={0,2,4,6,8,10,//시작:0 1번:5->20
            12,14,16,18,20,//2번:10->23
            22,24,26,28,30,//3번:15->25
            32,34,36,38,//4번:19->끝:31
            13,16,19,//22->28
            22,24,//24->28
            28,27,26,//27->28
            25,30,35,40,0};
int Move[10];
int horse[4]={0,0,0,0};

void game(int cnt, int sum)
{
    if (cnt==10)
    {
        if (sum>max_score) max_score=sum;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int move_cnt=Move[cnt], start=horse[i], pos=horse[i];
        for (int j = 0; j < move_cnt; j++)
        {
            if (pos==32) break;
            if (start==pos)
            {
                if (pos==5)
                {
                    pos=20;
                    continue;
                }
                else if (pos==10)
                {
                    pos=23;
                    continue;
                }
                else if (pos==15)
                {
                    pos=25;
                    continue;
                }
            }
            if (pos==19) pos=31;
            else if (pos==22) pos=28;
            else if (pos==24) pos=28;
            else pos++;
        }
        bool able=true;
        for (int j = 0; j < 4; j++)
        {
            if (pos!=32 && pos==horse[j]) able=false;
        }
        if (able)
        {
            int tmp=horse[i];
            horse[i]=pos;
            game(cnt+1, sum+Map[pos]);
            horse[i]=tmp;
        }
    }
}

void solve()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> Move[i];
    }
    game(0,0);
    cout << max_score;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}