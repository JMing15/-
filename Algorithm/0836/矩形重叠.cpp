#include <vector>
#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
using namespace std;

//解法一
bool isRectangleOverlap1(vector<int>& rec1, vector<int>& rec2) {
    return !(rec1[2] <= rec2[0] ||
        rec1[0] >= rec2[2] ||
        rec1[3] <= rec2[1] ||
        rec1[1] >= rec2[3]);
}

//解法二
bool isRectangleOverlap2(vector<int>& rec1, vector<int>& rec2) {
    return (max(rec1[0],rec2[0]) < min(rec1[2],rec2[2]) &&  
		max(rec1[1],rec2[1]) < min(rec1[3],rec2[3]));
}

void main()
{
	vector<int> rec1 = { 0,0,2,2 };
	vector<int> rec2 = { 1,1,3,3 };
	bool is_overlap = isRectangleOverlap1(rec1,rec2);
}