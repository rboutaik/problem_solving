#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;

vector<string> arr(501);
bool    visited[501][501];

int m, n, k;

bool    valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 &&y < m && arr[x][y] == '.');
}

bool    check(int x, int y)
{
    if (valid(x, y))
    {
            if (!visited[x][y])
                return (0);
    }
    return (1);
}


bool    isLeaf(int x, int y)
{
    if (!check(x+1, y) || !check(x-1, y) || !check(x, y+1) || !check(x, y-1))
        return (0);
    return (1); 
}

void    bfs(int x, int y)
{
    visited[x][y] = 1;

    if (valid(x + 1, y) && !visited[x + 1][y])
        bfs(x + 1, y);
    if (valid(x - 1, y) && !visited[x - 1][y])
        bfs(x - 1, y);
    if (valid(x, y + 1) && !visited[x][y + 1])
        bfs(x, y + 1);
    if (valid(x, y - 1) && !visited[x][y - 1])
        bfs(x, y - 1);

    if (isLeaf(x, y))
    {
        if (k > 0)
        {
            arr[x][y] = 'X';
            k--;
        }
    }

}


void    solution()
{
    cin >> n >> m >> k;
    int x, y, flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        size_t h;
        if (flag && (h = arr[i].find('.')) != string::npos)
        {
            x = i;
            y = h;
            flag = 0;
        }
    }



    bfs(x, y);


    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << endl;
    }



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
      solution();
    return (0);
}