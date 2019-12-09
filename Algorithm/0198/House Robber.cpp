#include<vector>
using namespace std;
#define max(a,b) (a)>(b)?(a):(b)

int rob(vector<int>& nums) {
	if (nums.size() == 0) return 0;
	if (nums.size() == 1) return nums[0];

	vector<int> result(nums.size(),0);
	result[0] = nums[0];
	result[1] = max(nums[0], nums[1]);

	for (int i = 2; i < nums.size(); i++)
	{
		result[i] = max(result[i - 1], result[i - 2] + nums[i]);
	}

	return result.back();
}

int main()
{
	vector<int> input = { 1,2,3,1 };
	int s = rob(input);
}