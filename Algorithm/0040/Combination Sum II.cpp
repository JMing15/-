#include <vector>
#include <algorithm>
using namespace std;

void findCombination(vector<int>& candidates, int index,  int target, vector<int> &combiantion, vector<vector<int>> &res);

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
	if (candidates.empty())
		return{};
	sort(candidates.begin(), candidates.end(), [](int a, int b)->bool {return a < b; });
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
		if (i > index && candidates[i] == candidates[i - 1]) continue;
		combiantion.push_back(candidates[i]);
		findCombination(candidates, i+1, target - candidates[i], combiantion, res);
		combiantion.pop_back();
	}
}

void main()
{
	vector<int> candidates = { 10,1,2,7,6,1,5 };
	vector<vector<int>> res = combinationSum2(candidates,8);
}