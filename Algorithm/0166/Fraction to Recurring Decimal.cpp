#include <string>
#include <unordered_map>
using namespace std;


// upgraded parameter types
string fractionToDecimal(_int64 n, _int64 d) {
	if (n == 0)
		return "0";

	string res = "";
	//is negative?
	if (n < 0 ^ d < 0)
		res += '-';

	n = abs(n); d = abs(d);

	res += to_string(n / d);

	//is integer?
	if (n % d == 0)
		return res;
	res += '.';

	unordered_map<int, int> map;
	for (_int64 r = n % d; r; r %= d)
	{
		if (map.count(r)>0)
		{
			res.insert(map[r], 1, '(');
			res += ')';
			break;
		}
		map[r] = res.size();

		r *= 10;
		res += to_string(r / d);
	}
	return res;
}

int main()
{
	string s = fractionToDecimal(1, 17);
}