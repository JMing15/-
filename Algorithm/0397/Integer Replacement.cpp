#include <limits>
int integerReplacement(int n) {
	if (n == INT_MAX)
		return 32;
	int times = 0;
	while (n != 1)
	{
		if ((n & 1) == 0)
			n >>= 1;
		else if ((n + 1) % 4 == 0 && n != 3)
			++n;
		else
			--n;
		++times;
	}
	return times;
}

int main()
{
	int times = integerReplacement(1000);
}