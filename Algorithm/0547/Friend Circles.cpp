#include<vector>
using namespace std;


void merge(vector<int> &fa, int i, int j)
{
	int x = find(fa, i);
	int y = find(fa, j);
	if (x != y)
		fa[x] = y;
}

int find(vector<int> &fa, int x)
{
	return (-1 == fa[x]) ? x : find(fa, fa[x]);
}

int findCircleNum(vector<vector<int>>& M) {
	vector<int> fa(M.size(), -1);
	for (int i = 0; i < M.size(); i++)
		for (int j = 0; j < M[i].size(); j++)
		{
			if (i != j && M[i][j] == 1)
				merge(fa, i, j);
		}
	int ans = 0;
	for (int i = 0; i < fa.size(); i++)
		if (fa[i] == -1)
			ans++;
	return ans;
}

