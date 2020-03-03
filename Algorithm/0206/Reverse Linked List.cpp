//!解法一：递归
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}

};

ListNode* reverseList1(ListNode* head) {
	if (head == nullptr || head->next == nullptr) return head;
	ListNode *p = reverseList1(head->next);
	head->next->next = head;
	head->next = nullptr;
	return p;
}

//!解法二：迭代
ListNode* reverseList2(ListNode* head) {
	ListNode *pre = nullptr;
	ListNode *curr = head;
	while (curr != nullptr)
	{
		ListNode *temp = curr->next;
		curr->next = pre;
		pre = curr;
		curr = temp;
	}
	return pre;
}

void main()
{
	ListNode *head = new ListNode(1);
	ListNode *p1 = new ListNode(2);
	ListNode *p2 = new ListNode(3);
	ListNode *p3 = new ListNode(0);

	head->next = p1;
	p1->next = p2;
	p2->next = p3;
	p3->next = nullptr;

	ListNode* p = reverseList2(head);
}