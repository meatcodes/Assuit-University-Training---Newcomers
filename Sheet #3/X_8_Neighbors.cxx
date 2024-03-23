//Just check all 8 neighbours are not '.'
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    char a[101][101];
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];

    int r,c;
    cin>>r>>c;

    if( (a[r][c-1]!='.')&&(a[r][c+1]!='.')&&(a[r-1][c]!='.')&&(a[r+1][c]!='.')&&(a[r-1][c-1]!='.')&&(a[r-1][c+1]!='.')&&(a[r+1][c-1]!='.')&&(a[r+1][c+1]!='.')) cout<<"yes";
    else cout<<"no";

    return 0;
}

//Here again we are checking all 8 neighbours but in standard manner (above code might generate memory access error)
//we are checking one row above and one row below of the given position if found dot in above in above or below row then ans=1
//if found dot in row same as position then check column is not same as position if not then ans=1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    char arr[x][y];
    for(int i=0;i<x;i++) for(int j=0;j<y;j++) cin>>arr[i][j];

    int a,b;
    cin>>a>>b;

    int ans=0;
    for(int i=a-2;i<a+1;i++) for(int j=b-2;j<b+1;j++) if(arr[i][j]=='.' && (i!=a-1 || j!=b-1)) ans=1;
	    
    if(ans==0) cout<<"yes";
    else if(ans==1) cout<<"no";

    return 0;
}

//Another implementation
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    char a[101][101];
    for (int i = 0; i < n; i++) cin >> a[i];

    int x,y;
    cin >> x >> y;
    x--;
    y--;

    int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
    int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};
    
    bool all_x = true;
    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if (a[nx][ny] != 'x')
            {
                all_x = false;
                break;
            }
        }
    }

    if (all_x) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
