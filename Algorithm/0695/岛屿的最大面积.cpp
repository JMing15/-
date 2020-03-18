#include <vector>
#include <queue>
#define max(a,b) a>b?a:b
using namespace std;

//start DFS 
void DFS(int i, int j, vector<vector<int>> &grid, int &times)
{
	if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) return;
	grid[i][j] = 0;
	times++;
	vector<vector<int>> direc = { { -1,0 },{ 0,1 },{ 1,0 },{ 0,-1 } };
	for (int k = 0; k < direc.size(); k++)
	{
		int x = i + direc[k][0];
		int y = j + direc[k][1];
		DFS(x, y, grid, times);
	}
}

int maxAreaOfIsland1(vector<vector<int>>& grid) {
	int ans = 0;
	for (int i = 0; i < grid.size(); i++)
		for (int j = 0; j < grid[i].size(); j++)
		{
			int temp = 0;
			if (grid[i][j] == 1)
			{
				DFS(i, j, grid, temp);
				ans = max(ans, temp);
			}
		}
	return ans;
}
//end

//start BFS
int maxAreaOfIsland2(vector<vector<int>>& grid) {
	int ans = 0;
	for (int i = 0; i < grid.size(); i++)
		for (int j = 0; j < grid[0].size(); j++)
		{
			int temp = 0;
			queue<pair<int, int>> q;
			q.push({ i,j });
			while (!q.empty())
			{
				pair<int, int> p = q.front();
				q.pop();
				int x = p.first;
				int y = p.second;
				if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 1)
				{
					temp++;
					grid[x][y] = 0;
					vector<vector<int>> direc = { {-1,0},{0,1},{1,0},{0,-1} };
					for (int k = 0; k < direc.size(); k++)
					{
						int xx = x + direc[k][0];
						int yy = y + direc[k][1];
						q.push({ xx,yy });
					}
				}
			}
			ans = max(ans, temp);
		}
	return ans;
}
//end

void main()
{
	vector<vector<int>> grid = { {0,0,1,0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,0,0,0},
		{0,1,1,0,1,0,0,0,0,0,0,0,0},
		{0,1,0,0,1,1,0,0,1,0,1,0,0},
		{0,1,0,0,1,1,0,0,1,1,1,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,0,0},
		{0,0,0,0,0,0,0,1,1,1,0,0,0},
		{0,0,0,0,0,0,0,1,1,0,0,0,0}
	};

	int ans = maxAreaOfIsland2(grid);
}