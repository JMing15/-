#include <string>
#define min(a,b) a<b?a:b
using namespace std;

bool check(string str, string s)
{
	int times = str.length() / s.length();
	string ans = "";
	for (int i = 0; i < times; i++)
		ans += s;
	return ans == str;
}

string gcdOfStrings(string str1, string str2)
{
	int len1 = str1.length(), len2 = str2.length();
	for (int i = min(len1, len2); i > 0; i--)
	{
		if (len1 % i == 0 && len2 % i == 0)
		{
			string s = str1.substr(0, i);
			if (check(str1, s) && check(str2, s))
				return s;
		}
	}
	return "";
}

void main()
{
}