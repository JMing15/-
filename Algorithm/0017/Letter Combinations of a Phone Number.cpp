#include <vector>
#include <string>
using namespace std;
vector<string> phoneNumberMap =
{
	"",			//0
	"",			//1
	"abc",		//2
	"def",		//3
	"ghi",		//4
	"jkl",		//5
	"mno",		//6
	"pqrs",		//7
	"tuv",		//8
	"wxyz"		//9
};

void findletterCombination(vector<string> &res, string digits, int index, string s);

vector<string> letterCombinations(string digits) {
	vector<string> res = {};
	if (digits.size() == 0)	return res;
	findletterCombination(res, digits, 0, "");
	return res;
}

void findletterCombination(vector<string> &res, string digits, int index, string s)
{
	if (index == digits.length())
	{
		res.push_back(s);
		return;
	}
	char num = digits[index];
	string letter = phoneNumberMap[num - '0'];
	for (int i = 0; i < letter.length(); i++)
		findletterCombination(res, digits, index + 1, s + letter[i]);
	return;
}

int main()
{
	vector<string> res = letterCombinations("23");
}