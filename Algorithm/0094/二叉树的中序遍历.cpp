#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(vector<int> &v, TreeNode *node)
{
	if (node == NULL)
		return;
	inorder(v, node->left);
	v.push_back(node->val);
	inorder(v, node->right);
}

//递归
vector<int> inorderTraversal2(TreeNode* root) {
	vector<int> ans = {};
	inorder(ans, root);
	return ans;
}


//使用栈迭代
vector<int> inorderTraversal2(TreeNode* root) {
	vector<int> ans = {};
	if (root == NULL)
		return ans;
	stack<TreeNode*> st;
	TreeNode *node = root;
	while (!st.empty() || node!=NULL)
	{
		while (node!=NULL)
		{
			st.push(node);
			node = node->left;
		}
		if (!st.empty())
		{
			node = st.top();
			st.pop();
			ans.push_back(node->val);
			node = node->right;
		}
	}
	return ans;
}

//!莫里斯遍历
vector<int> inorderTraversal2(TreeNode* root) {
	vector<int> ans;
	TreeNode *pre = NULL;
	while (root!=NULL)
	{
		if (root->left!=NULL)
		{
			pre = root->left;
			while (pre->right != NULL)
				pre = pre->right;
			pre->right = root;
			TreeNode *temp = root;
			root = root->left;
			temp->left = NULL;
		}
		else
		{
			ans.push_back(root->val);
			root = root->right;
		}
	}
	return ans;
}

void main()
{


}