#include<stack>
using namespace std;

//解法1：使用两个栈
class MinStack1 {
public:
	/** initialize your data structure here. */
	MinStack1() {
		data = {};
		min = {};
	}

	void push(int x) {
		data.push(x);
		if (!min.empty())
		{
			if (x <= min.top())
				min.push(x);
		}
		else
			min.push(x);
	}

	void pop() {
		if (data.empty())
			return;
		int top = data.top();
		data.pop();
		if (top == min.top())
			min.pop();
	}

	int top() {
		return data.top();
	}

	int getMin() {
		return min.top();
	}

	stack<int> data;
	stack<int> min;
};

//解法2：使用一个栈
class MinStack2 {
public:
	/** initialize your data structure here. */
	MinStack2() {
		data = {};
		min = INT_MIN;
	}

	void push(int x) {
		if (x <= min)
		{ 
			data.push(min);
			min = x;
		}
		data.push(x);
	}

	void pop() {
		if (data.empty())
			return;
		if (data.top() == min)
		{
			data.pop();
			min = data.top();
			data.pop();
		}
		data.pop();
	}

	int top() {
		data.top();
	}

	int getMin() {
		return min;
	}

	int min;
	stack<int> data;
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack* obj = new MinStack();
* obj->push(x);
* obj->pop();
* int param_3 = obj->top();
* int param_4 = obj->getMin();
*/

int main()
{

}