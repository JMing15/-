unsigned int reverseBits(unsigned int n) {
	unsigned int res = 0;
	for (int i = 0; i < 32; i++)
	{
		res = (res << 1) | (n & 1);
		n >>= 1;
	}
	return res;
}

int main()
{
	unsigned int input = 43261596;
	unsigned int res = reverseBits(input);
}