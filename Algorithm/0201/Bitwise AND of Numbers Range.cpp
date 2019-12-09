int rangeBitwiseAnd(int m, int n) {
	int moveCount = 0;
	while (m != n)
	{
		m >>= 1;
		n >>= 1;
		++moveCount;
	}
	return m << moveCount;
}

int main()
{
	int res = rangeBitwiseAnd(26,30);
}