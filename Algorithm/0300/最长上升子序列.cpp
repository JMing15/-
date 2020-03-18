#include <vector>
#include <algorithm>
#define max(a,b) a>b?a:b
using namespace std;

int lengthOfLIS(vector<int>& nums) {
	vector<int> dp(nums.size(), 1);
	dp[0] = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (nums[j] < nums[i])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int ans = *max_element(dp.begin(), dp.end());
	return ans;
}

void main()
{
	vector<int> nums = { 1,3,6,7,9,4,10,5,6 };

	int ans = lengthOfLIS(nums);
}