#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	int index = 0;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[index])
			nums[++index] = nums[i];
	}
	nums.erase(nums.begin() + index + 1,nums.end());
	return index + 1;
}

int main()
{
	vector<int> nums = {  };
	int length = removeDuplicates(nums);
	return 0;
}