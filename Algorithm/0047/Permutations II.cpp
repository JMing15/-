#include <vector>
#include <algorithm>
using namespace std;

void findPermute(vector<int>& nums, /*int index,*/ vector<bool> &used, vector<int> &permute, vector<vector<int>> &res);

vector<vector<int>> permuteUnique(vector<int>& nums) {
	if (nums.empty())return{};
	sort(nums.begin(), nums.end(), [](int a, int b)->bool {return a < b; });
	vector<vector<int>> res = {};
	vector<int> permute = {};
	vector<bool> used(nums.size(), false);
	findPermute(nums, /*0,*/ used, permute, res);
	return res;
}

void findPermute(vector<int>& nums, /*int index, */vector<bool> &used, vector<int> &permute, vector<vector<int>> &res)
{
	if (permute.size() == nums.size())
	{
		res.push_back(permute);
		return;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (!used[i])
		{
			if (i > 0 && nums[i] == nums[i - 1] && !used[i-1]) continue;
			permute.push_back(nums[i]);
			used[i] = true;
			findPermute(nums, /*i + 1,*/ used, permute, res);
			permute.pop_back();
			used[i] = false;
		}
	}
}

void main()
{
	vector<int> nums = { 1,2,3 };
	vector<vector<int>> res = {};
	res = permuteUnique(nums);
}