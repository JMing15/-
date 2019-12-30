#include <vector>
#include <algorithm>
using namespace std;

void Permutation(int n, vector<bool> &used, vector<int> &p, vector<vector<int>> &res);

string getPermutation(int n, int k) {
	if (n == 0)	return "";
	vector<bool> used(n,false);
	vector<vector<int>> res = {};
	vector<int> p = {};
	Permutation(n, used, p, res);
	string ret = "";
	for (int i=0;i<n;i++)
	{
		ret += res[k-1][i] + '0';
	}
	return ret;
}

void Permutation(int n, vector<bool> &used, vector<int> &p, vector<vector<int>> &res)
{
	if (p.size() == n)
	{
		res.push_back(p);
	}

	for (int i = 1; i <= n; i++)
	{
		if (!used[i-1])
		{
			used[i-1] = true;
			p.push_back(i);
			Permutation(n, used, p, res);
			p.pop_back();
			used[i-1] = false;
		}
	}
}

void main()
{
	string ret;
	ret = getPermutation(9,2678);
}