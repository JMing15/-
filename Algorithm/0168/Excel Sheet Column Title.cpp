#include <string>
using namespace std;

int titleToNumber(string s) {
	int res = 0;
	for (int i = 0; i < s.length(); i++)
		res += (s[i] - 65 + 1) * pow(26, s.length() - i - 1);
	return res;
}

int main()
{
	string s = "A";
	int num = titleToNumber(s);
}