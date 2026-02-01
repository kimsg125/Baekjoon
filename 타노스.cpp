#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;

    cin >> S;
    int cnt_zero=0, cnt_one=0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i]=='0') cnt_zero++;
        else cnt_one++;
    }

    vector<int> v(S.size(),1);
    int cnt=0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i]=='1')
        {
            v[i]=0;
            cnt++;
        }
        if (cnt*2==cnt_one) break;
    }
    cnt=0;
    for (int i = S.size()-1; i >= 0; i--)
    {
        if (S[i]=='0')
        {
            v[i]=0;
            cnt++;
        }
        if (cnt*2==cnt_zero) break;
    }
    
    string new_S="";
    for (int i = 0; i < S.size(); i++)
    {
        if (v[i]==1)
        {
            if (S[i]=='0') new_S+="0";
            else new_S+="1";
        }
    }
    cout << new_S;
}