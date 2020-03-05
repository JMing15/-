#include<vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> map;
	vector<int> res = {};
	for (int i = 0; i < nums.size(); i++)
	{
		int num = target - nums[i];
		if (map.find(num) != map.end())
		{
			res.push_back(map[i]);
			res.push_back(i);
		}
		else
			map[nums[i]] = i;
	}
	return res;
}

void main()
{
	vector<int> nums = { 3,2,3 };

	vector<int> res = twoSum(nums, 6);
}