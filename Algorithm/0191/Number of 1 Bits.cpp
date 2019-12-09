int hammingWeight(unsigned int n) {
	int res = 0;
	for (int i = 0; i < 32; i++)
	{
		res += n & 1 == 1 ? 1 : 0;
		n >>= 1;
	}
	return res;
}

int main()
{
	unsigned int input = 11;
	int res = hammingWeight(input);
}