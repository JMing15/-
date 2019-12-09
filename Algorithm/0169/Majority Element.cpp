#include <string>
using namespace std;

string convertToTitle(int n) {
	//retrun value
	string res = "";

	while (n)
	{
		n--;
		int num = n % 26;
		n = n / 26;
		res.insert(res.begin(), 'A' + num);
	}
	return res;
}


int main()
{
	string s = "";
	convertToTitle(701);
}