#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) 
{
	int left = 0, right = nums.size()-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		int num = nums[mid];
		if ((nums[mid] < nums[0]) == (target < nums[0]))
		{
			num = nums[mid];
		}
		else
		{
			num = target < nums[0] ? INT_MIN : INT_MAX;
		}
		if (target > num)
			left = mid + 1;
		else if(target < num)
			right = mid - 1;
		else 
			return mid;
	}
	return -1;
}

int main()
{
	vector<int> nums = { 4,5,6,7,0,1,2 };
	int length = search(nums,0);
	return 0;
}