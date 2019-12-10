#include <vector>
using namespace std;

//my solution
vector<int> countBits1(int num) {
	vector<int> res = {};
	for (int i = 0; i <= num; i++)
	{
		int times = 0, temp = i;
		while (temp)
		{
			++times;
			temp &= temp - 1;
		}
		res.push_back(times);
	}
	return res;
}

//wow solution
vector<int> countBits2(int num) {
	vector<int> res(num + 1, 0);
	for (int i = 1; i <= num; i++)
		res[i] = res[i&(i - 1)] + 1;
	return res;
}

int main()
{
	vector<int> res = countBits2(5);
}