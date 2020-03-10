#include <vector>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
using namespace std;

int maxProfit(vector<int>& prices) {
	int inf = 1e9;
	int minProfit = inf, maxProfit = 0;
	for (auto price : prices)
	{
		maxProfit = max(maxProfit, price - minProfit);
		minProfit = min(minProfit, price);
	}
	return maxProfit;
}

void main()
{
	vector<int> nums = { 7,1,5,3,6,4 };
	int res = maxProfit(nums);
}