#include <vector>
#include <set>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

//方法一：set
bool hasCycle1(ListNode *head) {
	set<ListNode*> travaled;
	while (head)
	{
		if (travaled.find(head) == travaled.end())
			travaled.insert(head);
		else
			return true;
		head = head->next;
	}
	return false;
}

//方法二：快慢指针
bool hasCycle2(ListNode *head) {
	if (head == nullptr || head->next == nullptr) return false;
	ListNode *slowNode = head;
	ListNode *fastNode = head->next;
	while (slowNode != fastNode)
	{
		if (slowNode == nullptr || fastNode == nullptr || fastNode->next == nullptr) return false;
		slowNode = slowNode->next;
		fastNode = fastNode->next->next;
	}
	return true;
}

void main()
{
	

}