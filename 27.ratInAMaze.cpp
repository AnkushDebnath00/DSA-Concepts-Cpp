#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Printing.h>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> &maze, vector<vector<int>> &visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && maze[x][y] == 1 && visited[x][y] == 0)
        return true;
    return false;
}

void ratInAMazeHelper(vector<vector<int>> &maze, int n, vector<vector<int>> &visited, int x, int y, string path, vector<string> &ans)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    cout << path << endl;
    if (isSafe(x + 1, y, n, maze, visited))
    {
        path.push_back('D');
        ratInAMazeHelper(maze, n, visited, x + 1, y, path, ans);
        path.pop_back();
    }
    if (isSafe(x, y + 1, n, maze, visited))
    {
        path.push_back('R');
        ratInAMazeHelper(maze, n, visited, x, y + 1, path, ans);
        path.pop_back();
    }
    if (isSafe(x - 1, y, n, maze, visited))
    {
        path.push_back('U');
        ratInAMazeHelper(maze, n, visited, x - 1, y, path, ans);
        path.pop_back();
    }
    if (isSafe(x, y - 1, n, maze, visited))
    {
        path.push_back('L');
        ratInAMazeHelper(maze, n, visited, x, y - 1, path, ans);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> ratInAMaze(vector<vector<int>> &maze, int n)
{
    vector<string> ans;

    if (maze[0][0] == 0)
        return ans;
    int x = 0;
    int y = 0;
    return ans;
    vector<vector<int>> visited = maze;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            visited[i][j] = 0;
    string path = "";
    ratInAMazeHelper(maze, n, visited, x, y, path, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n = maze.size();
    printVectorString(ratInAMaze(maze, n));
}
