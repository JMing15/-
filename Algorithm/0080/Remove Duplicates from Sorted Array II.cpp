#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	int index = 0;
	bool blTwice = false;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[index])
		{ 
			nums[++index] = nums[i];
			blTwice = false;
		}
		else if (nums[i] == nums[index] && blTwice == false)
		{
			nums[++index] = nums[i];
			blTwice = true;
		}
	}
	nums.erase(nums.begin() + index + 1,nums.end());
	return nums.size();
}

int main()
{
	vector<int> nums = { 0,0,1,1,1,1,2,3,3 };
	int length = removeDuplicates(nums);
	return 0;
}