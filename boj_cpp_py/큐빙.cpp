#include <bits/stdc++.h>
using namespace std;

int n, tmp1, tmp2, tmp3;
string s;
// 0 up_side
// 1 down_side
// 2 front_side
// 3 back_side
// 4 left_side
// 5 right_side
//  3
// 415
//  2
//  0
int cube_side[3][3][6];

//     321
//     654
//     987
// 147 321 963
// 258 654 852
// 369 987 741
//     789
//     456
//     123
//     789
//     456
//     123

void line_rot(int &a1, int &a2, int &a3, int &b1, int &b2, int &b3, int &c1, int &c2, int &c3, int &d1, int &d2, int &d3) {
    tmp1=a1; tmp2=a2; tmp3=a3;
    a1=b1; a2=b2; a3=b3;
    b1=c1; b2=c2; b3=c3;
    c1=d1; c2=d2; c3=d3;
    d1=tmp1; d2=tmp2; d3=tmp3;
}

void cw_rot(int side) {
    tmp1=cube_side[0][0][side]; tmp2=cube_side[0][1][side];
    cube_side[0][0][side]=cube_side[2][0][side]; cube_side[0][1][side]=cube_side[1][0][side];
    cube_side[2][0][side]=cube_side[2][2][side]; cube_side[1][0][side]=cube_side[2][1][side];
    cube_side[2][2][side]=cube_side[0][2][side]; cube_side[2][1][side]=cube_side[1][2][side];
    cube_side[0][2][side]=tmp1; cube_side[1][2][side]=tmp2;
    if (side==0)
    {
        line_rot(cube_side[0][0][3],cube_side[0][1][3],cube_side[0][2][3],
            cube_side[0][0][4],cube_side[0][1][4],cube_side[0][2][4],
            cube_side[0][0][2],cube_side[0][1][2],cube_side[0][2][2],
            cube_side[0][0][5],cube_side[0][1][5],cube_side[0][2][5]);
    }
    else if (side==1)
    {
        line_rot(cube_side[2][0][3],cube_side[2][1][3],cube_side[2][2][3],
            cube_side[2][0][5],cube_side[2][1][5],cube_side[2][2][5],
            cube_side[2][0][2],cube_side[2][1][2],cube_side[2][2][2],
            cube_side[2][0][4],cube_side[2][1][4],cube_side[2][2][4]);
    }
    else if (side==2)
    {
        line_rot(cube_side[2][0][0],cube_side[2][1][0],cube_side[2][2][0],
            cube_side[2][2][4],cube_side[1][2][4],cube_side[0][2][4],
            cube_side[2][0][1],cube_side[2][1][1],cube_side[2][2][1],
            cube_side[0][0][5],cube_side[1][0][5],cube_side[2][0][5]);
    }
    else if (side==3)
    {
        line_rot(cube_side[0][2][0],cube_side[0][1][0],cube_side[0][0][0],
            cube_side[2][2][5],cube_side[1][2][5],cube_side[0][2][5],
            cube_side[0][2][1],cube_side[0][1][1],cube_side[0][0][1],
            cube_side[0][0][4],cube_side[1][0][4],cube_side[2][0][4]);
    }
    else if (side==4)
    {
        line_rot(cube_side[0][0][0],cube_side[1][0][0],cube_side[2][0][0],
            cube_side[2][2][3],cube_side[1][2][3],cube_side[0][2][3],
            cube_side[2][2][1],cube_side[1][2][1],cube_side[0][2][1],
            cube_side[0][0][2],cube_side[1][0][2],cube_side[2][0][2]);
    }
    else if (side==5)
    {
        line_rot(cube_side[2][2][0],cube_side[1][2][0],cube_side[0][2][0],
            cube_side[2][2][2],cube_side[1][2][2],cube_side[0][2][2],
            cube_side[0][0][1],cube_side[1][0][1],cube_side[2][0][1],
            cube_side[0][0][3],cube_side[1][0][3],cube_side[2][0][3]);
    }
}

void ccw_rot(int side) {
    tmp1=cube_side[0][0][side]; tmp2=cube_side[0][1][side];
    cube_side[0][0][side]=cube_side[0][2][side]; cube_side[0][1][side]=cube_side[1][2][side];
    cube_side[0][2][side]=cube_side[2][2][side]; cube_side[1][2][side]=cube_side[2][1][side];
    cube_side[2][2][side]=cube_side[2][0][side]; cube_side[2][1][side]=cube_side[1][0][side];
    cube_side[2][0][side]=tmp1; cube_side[1][0][side]=tmp2;
    if (side==0)
    {
        line_rot(cube_side[0][0][3],cube_side[0][1][3],cube_side[0][2][3],
            cube_side[0][0][5],cube_side[0][1][5],cube_side[0][2][5],
            cube_side[0][0][2],cube_side[0][1][2],cube_side[0][2][2],
            cube_side[0][0][4],cube_side[0][1][4],cube_side[0][2][4]);
    }
    else if (side==1)
    {
        line_rot(cube_side[2][0][3],cube_side[2][1][3],cube_side[2][2][3],
            cube_side[2][0][4],cube_side[2][1][4],cube_side[2][2][4],
            cube_side[2][0][2],cube_side[2][1][2],cube_side[2][2][2],
            cube_side[2][0][5],cube_side[2][1][5],cube_side[2][2][5]);
    }
    else if (side==2)
    {
        line_rot(cube_side[2][0][0],cube_side[2][1][0],cube_side[2][2][0],
            cube_side[0][0][5],cube_side[1][0][5],cube_side[2][0][5],
            cube_side[2][0][1],cube_side[2][1][1],cube_side[2][2][1],
            cube_side[2][2][4],cube_side[1][2][4],cube_side[0][2][4]);
    }
    else if (side==3)
    {
        line_rot(cube_side[0][2][0],cube_side[0][1][0],cube_side[0][0][0],
            cube_side[0][0][4],cube_side[1][0][4],cube_side[2][0][4],
            cube_side[0][2][1],cube_side[0][1][1],cube_side[0][0][1],
            cube_side[2][2][5],cube_side[1][2][5],cube_side[0][2][5]);
    }
    else if (side==4)
    {
        line_rot(cube_side[0][0][0],cube_side[1][0][0],cube_side[2][0][0],
            cube_side[0][0][2],cube_side[1][0][2],cube_side[2][0][2],
            cube_side[2][2][1],cube_side[1][2][1],cube_side[0][2][1],
            cube_side[2][2][3],cube_side[1][2][3],cube_side[0][2][3]);
    }
    else if (side==5)
    {
        line_rot(cube_side[2][2][0],cube_side[1][2][0],cube_side[0][2][0],
            cube_side[0][0][3],cube_side[1][0][3],cube_side[2][0][3],
            cube_side[0][0][1],cube_side[1][0][1],cube_side[2][0][1],
            cube_side[2][2][2],cube_side[1][2][2],cube_side[0][2][2]);
    }
}

void solve() {
    cin >> n;
    // 0:w 1:y 2:r 3:o 4:g 5:b
    for (int face = 0; face < 6; face++)
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cube_side[i][j][face] = face;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int face;
        if (s[0]=='U') face=0;
        else if (s[0]=='D') face=1;
        else if (s[0]=='F') face=2;
        else if (s[0]=='B') face=3;
        else if (s[0]=='L') face=4;
        else if (s[0]=='R') face=5;
        if (s[1]=='+') cw_rot(face);
        else if (s[1]=='-') ccw_rot(face);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (cube_side[i][j][0]==0) cout << 'w';
            else if (cube_side[i][j][0]==1) cout << 'y';
            else if (cube_side[i][j][0]==2) cout << 'r';
            else if (cube_side[i][j][0]==3) cout << 'o';
            else if (cube_side[i][j][0]==4) cout << 'g';
            else if (cube_side[i][j][0]==5) cout << 'b';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
}