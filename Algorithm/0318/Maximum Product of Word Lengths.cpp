#include <vector>
#include <string>
using namespace std;
int maxProduct(vector<string>& words) {
	vector<int> bwords = {};
	for (int i = 0;i<words.size();i++)
	{
		int temp = 0;
		for (int j=0;j<words[i].length();j++)
		{
			temp |= 1<<(words[i][j] - 'a');
		}
		bwords.push_back(temp);
	}

	int res = 0;
	for (int i = 0; i<bwords.size(); i++)
	{
		for (int j=i+1;j<bwords.size();j++)
		{
			int size = words[i].length() * words[j].length();
			if ((bwords[i] & bwords[j]) == 0 && (size > res))
				res = size;
		}
	}
	return res;
}

int main()
{
	vector<string> words = { "abcw","baz","foo","bar","xtfn","abcdef" };
	int res = maxProduct(words);
}