#include <vector>
#include <numeric>
using namespace std;

//直接找
bool canThreePartsEqualSum1(vector<int>& A) {
	int sum = accumulate(A.begin(), A.end(), 0);
	//元素之和不能被3整除的A一定不会平分为三份
	if (sum % 3 != 0) return false;
	int target = sum / 3, cur = 0, i = 0;
	while (i < A.size())
	{
		cur += A[i];
		if (cur == target)
			break;
		i++;
	}
	if (cur != target) return false;
	int j = i + 1;
	while (j + 1 < A.size()) //重点！ 保证第三部分不为空 j+1<A.size,否则 -1 1 -1 1这种情况错误
	{
		cur += A[j];
		if (cur == 2 * target)
			return true;
		j++;
	}
	return false;
}

//双指针法
bool canThreePartsEqualSum2(vector<int>& A) {
	int sum = accumulate(A.begin(), A.end(), 0);
	//元素之和不能被3整除的A一定不会平分为三份
	if (sum % 3 != 0) return false;
	int target = sum / 3;
	int left = 0, leftSum = A[left], right = A.size() - 1, rightSum = A[right];
	while (left + 1 < right)
	{
		if (leftSum == target && rightSum == target)
			return true;
		if (leftSum != target)
			leftSum += A[++left];
		if (rightSum != target)
			rightSum += A[--right];
	}
	return false;
}

void main()
{
	vector<int> A = { 3,3,6,5,-2,2,5,1,-9,4 };
	bool res = canThreePartsEqualSum1(A);

}