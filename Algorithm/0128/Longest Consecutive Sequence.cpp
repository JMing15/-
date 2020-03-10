#include <vector>
#include <set>
#include <algorithm>

using namespace std;

//排序
int longestConsecutive1(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int ans = 1,  currentStreak = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[i - 1])
		{
			if (nums[i] == nums[i - 1] + 1)
				currentStreak++;
			else
			{
				ans = max(ans, currentStreak);
				currentStreak = 1;
			}
		}
	}
	return ans;
}

//利用set
int longestConsecutive2(vector<int>& nums) {
	int ans = 0;
	set<int> nums_set;
	for (int i=0;i<nums.size();i++)
	{
		nums_set.insert(nums[i]);
	}
	for (set<int>::iterator it = nums_set.begin(); 
		it != nums_set.end(); it++)
	{
		if (nums_set.find(*it - 1) == nums_set.end())
		{
			int currentNum = *it;
			int currentLength = 1;
			//垃圾写法
			/*set<int>::iterator temp_it = ++it;
			while (temp_it != nums_set.end())
			{
				if (*temp_it == currentNum+1)
				{
					currentNum++;
					currentLength++;
				}
				else
				{
					ans = max(ans, currentLength);
					break;
				}
			}*/
			//优雅写法
			while (nums_set.find(currentNum + 1) != nums_set.end())
			{
				currentNum++;
				currentLength++;
			}
			ans = max(ans, currentLength);
		}
	}
	return ans;
}

void main()
{
	vector<int> nums = { -1,0};
	int res = longestConsecutive2(nums);
}