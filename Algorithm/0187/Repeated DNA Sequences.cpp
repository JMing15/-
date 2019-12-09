#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<string> findRepeatedDnaSequences(string s) {
	vector<string> res = {};
	if (s.length() <= 10)
		return res;
	int mask = 0x7ffffff, cur = 0;
	for (int i = 0; i < 9; i++)
		cur = (cur << 3) | (s[i] & 7);
	unordered_map<int, int> hash_map;
	for (int i = 9; i < s.length(); i++)
	{
		cur = ((cur&mask) << 3) | (s[i] & 7);
		if (hash_map.count(cur) > 0)
		{
			if (hash_map[cur] == 1)
				res.push_back(s.substr(i - 9, 10));
			++hash_map[cur];
		}
		else
			hash_map[cur] = 1;
	}
	return res;
}

int main()
{

}