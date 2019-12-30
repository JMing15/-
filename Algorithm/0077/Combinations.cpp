#include <vector>
#include <algorithm>
using namespace std;

void getCombination(int n, int k, int index, vector<int> &c, vector<vector<int>> &res);

vector<vector<int>> combine(int n, int k) {
	if (n == 0)	return{};
	vector<bool> used(n, false);
	vector<vector<int>> res = {};
	vector<int> p = {};
	getCombination(n, k, 1, p, res);

	return res;
}

void getCombination(int n, int k, int index, vector<int> &c, vector<vector<int>> &res)
{
	if (c.size() == k)
	{
		res.push_back(c);
		return;
	}

	for (int i = index; i <= n; i++)
	{
		c.push_back(i);
		getCombination(n, k, i + 1, c, res);
		c.pop_back();
	}
}

void main()
{
	vector<vector<int>> res = {};
	res = combine(4, 2);
}