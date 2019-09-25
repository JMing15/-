#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>> res = {};
	int size = 1 << nums.size();
	for (int i = 0; i < size; i++)
	{
		vector<int> temp = {};
		int index = 0,num = i;
		while (num != 0)
		{
			if (num & 1 == 1)
			{
				temp.push_back(nums[index]);
			}
			++index;
			num = num >> 1;
		}
		res.push_back(temp);
	}
	return res;
}

int main()
{
	vector<int> nums = {};
	vector<vector<int>> res = subsets(nums);
	return 0;
}