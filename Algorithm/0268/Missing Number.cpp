#include <vector>
using namespace std;
int missingNumber(vector<int>& nums) {
	int res = 0, i = 0;
	for (; i < nums.size(); i++)
	{
		res = res ^ i ^ nums[i];
	}
	return res ^ i;
}

int main()
{
	vector<int> nums = { 9,6,4,2,3,5,7,0,1 };
	int res = missingNumber(nums);
}