#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
	int res = 0;
	for (int i = 0; i < nums.size(); i++)
		res = res ^ nums[i];
	return res;
}

int main()
{
	vector<int> input = { 4,1,2,1,2};
	int num = singleNumber(input);
}