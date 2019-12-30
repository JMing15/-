#include <vector>
using namespace std;

void findCombination(vector<int>& candidates, int index,  int target, vector<int> &combiantion, vector<vector<int>> &res);

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	if (candidates.empty())
		return{};
	vector<vector<int>> res = {};
	vector<int> c = {};
	findCombination(candidates, 0, target, c, res);
	return res;
}

void findCombination(vector<int>& candidates, int index, int target, vector<int> &combiantion, vector<vector<int>> &res)
{
	if (target <= 0)
	{
		if (target == 0)
			res.push_back(combiantion);
		return;
	}
	for (int i = index; i < candidates.size(); i++)
	{
		combiantion.push_back(candidates[i]);
		findCombination(candidates, i, target - candidates[i], combiantion, res);
		combiantion.pop_back();
	}
}

void main()
{
	vector<int> candidates = { 2,3,6,7 };
	vector<vector<int>> res = combinationSum(candidates,7);
}