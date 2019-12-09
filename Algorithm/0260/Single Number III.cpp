#include <vector>
using namespace std;
vector<int> singleNumber(vector<int>& nums)
{
	vector<int> res = { 0,0 };
	int diff = 0;
	for (int i = 0; i < nums.size(); i++)
		diff ^= nums[i];
	diff = (diff ^ (diff - 1)) ^ diff;
	for (int i = 0; i < nums.size(); i++)
	{
		if (diff ^ nums[i])
			res[0] ^= nums[i];
		else
			res[1] ^= nums[i];
	}
	return res;
}
int main()
{
	vector<int> input = { 1,2,1,3,2,5 };
	vector<int> res = {};
	res = singleNumber(input);
}