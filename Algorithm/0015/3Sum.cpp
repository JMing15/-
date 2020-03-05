#include<vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	vector<vector<int>> res = {};
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > 0) break;
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		int L = i + 1;
		int R = nums.size() - 1;
		while (L < R)
		{
			int num = nums[i] + nums[L] + nums[R];
			if (num == 0)
			{
				vector<int> v = { nums[i],nums[L],nums[R] };
				res.push_back(v);
				while (L < R && nums[L] == nums[L + 1]) L++;
				while (L < R && nums[R] == nums[R - 1]) R--;
				L++;
				R--;
			}
			else if (num < 0) L++;
			else R--;
		}
	}
	return res;
}

void main()
{
	vector<int> nums = { -1, 0, 1, 2, -1, -4 };
	vector<vector<int>> res = threeSum(nums);
}