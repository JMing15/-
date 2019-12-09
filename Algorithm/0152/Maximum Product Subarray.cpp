#include<vector>
using namespace std;
#define MAX(a, b) ((a)>(b)?(a):(b))
#define MIN(a, b) ((a)>(b)?(b):(a))

int maxProduct(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	if (nums.size() == 1)
		return nums[0];

	int res = nums[0];
	int max = nums[0];
	int min = nums[0];

	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] < 0)
			swap(max, min);

		max = MAX(nums[i], max * nums[i]);
		min = MIN(nums[i], min * nums[i]);

		res = MIN(res, min);
	}

	return res;
}

int main()
{
	vector<int> in = { 2,3,-2,4 };
	int max = maxProduct(in);
}