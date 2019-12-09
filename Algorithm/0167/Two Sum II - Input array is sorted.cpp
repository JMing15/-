#include <string>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
	//return value
	vector<int> res = {};

	//key-num value-index
	unordered_map<int, int> hash_map;

	for (int i = 0; i < numbers.size(); i++)
	{
		int num = target - numbers[i];
		if (hash_map.find(num) != hash_map.end())
		{ 
			res.push_back(hash_map[num]+1), res.push_back(i+1);
			return res;
		}
		else
			hash_map[numbers[i]] = i;
	}
	return res;
}


int main()
{
	vector<int> numbers = { 2,7,11,15 };
	vector<int> res = twoSum(numbers,9);
}