#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int indicator = 0;
stack<int> intContentStack;
stack<int> minIntStack;
stack<double> doubleContentStack;
stack<double> minDoubleStack;
stack<string> stringContentStack;
stack<string> minStringStack;

//template <typename T>
int execute()
{
	string cmd;
	while (true)
	{
		cout << "Insert a command (push, pop, min, end) : ";
		cin >> cmd;

		if (cmd == "push")
		{
		    string input;
			cout << "Insert the element you want to add to the superStack: ";
			cin >> input;
			if (indicator == 1)
			{
			int intInput = stoi(input);
			
			intContentStack.push(intInput);

			if (minIntStack.empty() || intInput <= minIntStack.top())
			{
				minIntStack.push(intInput);
			}
		
			}
			else if (indicator == 2)
			{
			double dblInput = stod(input);
			
			doubleContentStack.push(dblInput);

			if (minDoubleStack.empty() || dblInput <= minDoubleStack.top())
			{
				minDoubleStack.push(dblInput);
			}
	
			}
			else
			{	
			stringContentStack.push(input);

			if (minStringStack.empty() || input <= minStringStack.top())
			{
				minStringStack.push(input);
			}		

			}

		}

		else if (cmd == "pop")
		{
		
			if (indicator == 1){
			if (intContentStack.empty())
			{
				cout << "Nothing on the stack to pop." << endl;
			}

			else
			{
				if (intContentStack.top() == minIntStack.top())
				{
					minIntStack.pop();
				}

				intContentStack.pop();
			}
			}
				
			else if (indicator == 2) 
			{
				if (doubleContentStack.empty())
			{
				cout << "Nothing on the stack to pop." << endl;
			}

			else
			{
				if (doubleContentStack.top() == minDoubleStack.top())
				{
					minDoubleStack.pop();
				}

				doubleContentStack.pop();
			}
			}
			else 
			{
				if (stringContentStack.empty())
			{
				cout << "Nothing on the stack to pop." << endl;
			}

			else
			{
				if (stringContentStack.top() == minStringStack.top())
				{
					minStringStack.pop();
				}

				stringContentStack.pop();
			}
			}
		}

		else if (cmd == "min")
		{

			if (indicator == 1)
			{
				if (!minIntStack.empty())
				{
					cout << "Minimum value in super stack is: " << minIntStack.top() << endl;
				}
				else
				{
					cerr << "Error: There are no elements in the stack! No minimum element." << endl;
				}
			}
			else if (indicator == 2)
			{
				if (!minDoubleStack.empty())
				{
					cout << "Minimum value in super stack is: " << minDoubleStack.top() << endl;
				}
				else
				{
					cerr << "Error: There are no elements in the stack! No minimum element." << endl;
				}
			}
			else
			{
				if (!minStringStack.empty())
				{
					cout << "Minimum value in super stack is: " << minStringStack.top() << endl;
				}
				else
				{
					cerr << "Error: There are no elements in the stack! No minimum element." << endl;
				}
			}
		}

		else if (cmd == "end")
		{
			exit(0);
		}

		else
		{
			cout << "Invalid command." << endl;
		}
	}
}

int main()
{ 
	string type;
	while (true)
	{
		cout << "Insert a data type you will be using (int, double, or string): ";
		cin >> type;
		if (type == "int")
		{
			indicator = 1;
			execute();
		}
		else if (type == "double")
		{
			indicator = 2;
			execute();
		}
		else if (type == "string")
		{
			execute();
		}
		else
		{
			cout << "Invalid data type please choose either int, double, or string" << endl;
		}
	}
	return 0;
}