bool isPowerOfTwo1(int n) {
	if (n < 0)
		return false;
	int countOne = 0;
	for (int i=0;i<32;i++)
	{
		if (n & 1 == 1)
			++countOne;
		n >>= 1;
	}
	return countOne == 1 ? true : false;
}

bool isPowerOfTwo2(int n) {
	if (n <= 0) return false;
	return !(n&(n - 1));
}

int main()
{
	bool res = isPowerOfTwo2(16);
}