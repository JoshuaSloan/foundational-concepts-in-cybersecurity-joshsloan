using namespace std;
#include <iostream>
#include <string>
#include <stack>

// the superStack class is actually two stacks that will allow me to use the STL stack functions which I know push and pop to operate in O(1) time
// which allowing me to incorperate a getMin using a second stack that holds the min value as the top element of the second stack
// so that it can be found in O(1) time as well. 

template <typename T> class SuperStack{

private:
	stack<T> elements;
	stack<T> minStack;

public:

	void push(T input)
	{
		elements.push(input);

		if (minStack.empty() || input <= minStack.top())
		{
			minStack.push(input);
		}
	}

	void pop()
	{
		if (elements.empty())
		{
			cout << "Nothing on the stack to pop." << endl;
		}

		else
		{
			if (elements.top() == minStack.top())
			{
				minStack.pop();
			}

			elements.pop();
		}


	}

	void findMin()
	{
		if (!minStack.empty())
		{
			cout << "Minimum value in super stack is: " << minStack.top() << endl;
		}
		else
		{
			cerr << "Error: There are no elements in the stack! No minimum element." << endl;
		}

	}
};