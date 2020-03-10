#include <iostream>
using namespace std;

class Node {
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val) {
		val = _val;
		next = NULL;
		random = NULL;
	}
};

Node* copyRandomList(Node* head) {
	if (head == nullptr) return nullptr;
	Node *node = head;
	//在每一个旧节点旁深拷贝一个新节点
	while (node != nullptr)
	{
		Node *new_node = new Node(node->val);
		new_node->next = node->next;
		node->next = new_node;
		node = node->next;
	}
	node = head;
	//深拷贝每一个random
	while (node != nullptr)
	{
		node->next->random = (node->random != nullptr) ? node->random->next : nullptr;
		node = node->next->next;
	}
	node = head;
	Node *new_head = head->next;
	Node *new_node = head->next;
	 //打断新旧节点 1->1`->2->2`->3->3`->4->4 ==> 1->2->3->4 1`->2`->3`->4`
	while (node != nullptr)
	{
		node->next = node->next->next;
		new_node->next = (new_node->next != nullptr) ? new_node->next->next : nullptr;
		node = node->next;
		new_node = new_node->next;
	}
	return new_head;
}

void main()
{
	//[[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
	Node *node1 = new Node(7);
	Node *node2 = new Node(13);
	Node *node3 = new Node(11);
	Node *node4 = new Node(10);
	Node *node5 = new Node(1);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = nullptr;

	node1->random = nullptr;
	node2->random = node1;
	node3->random = node5;
	node4->random = node3;
	node5->random = node1;

	Node* newNode = copyRandomList(node1);

}