#include <vector>
using namespace std;

 int majorityElement(vector<int>& nums) {
        int major = 0, count = 0;
        for (int i=0;i<nums.size();i++)
        {
            if (count == 0)
            {
                major = nums[i];
                ++count;
            }
            else if (nums[i] == major)
                ++count;
            else
                --count;
        }
        return major;
    }


int main()
{
	vector<int> nums = {2,2,1,1,1,2,2};
	int ans = majorityElement(nums);
}