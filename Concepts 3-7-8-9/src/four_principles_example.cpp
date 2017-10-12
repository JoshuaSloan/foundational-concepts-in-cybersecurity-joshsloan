#include <iostream>
#include <string>
#include <sstream>
#include "superStack.h"
using namespace std;

int indicator = 0;
SuperStack<int> istk;
SuperStack<double> dblstk;
SuperStack<string> sstk;

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
				try{istk.push(stoi(input));}
				
				catch(std::invalid_argument& e)
				{
				cout << "Invilid data entry. Limited to integer values! \n";
				}
						catch(std::out_of_range& e)
				{
					cout << "Input value too large, use smaller values please!\n";
				}
			}

			else if (indicator == 2)
			{
				try{dblstk.push(stod(input));}

				catch(std::invalid_argument& e)
				{
				cout << "Invilid data entry. Limited to double values! \n";
				}
				catch(std::out_of_range& e)
				{
					cout << "Input value too large, use smaller values please!\n";
				}
			}
			else
			{			
				sstk.push(input);
			}

		}

		else if (cmd == "pop")
		{
			if (indicator == 1){ istk.pop(); }
			else if (indicator == 2) { dblstk.pop(); }
			else { sstk.pop(); }
		}

		else if (cmd == "min")
		{
			if (indicator == 1)
			{
				istk.findMin();
			}
			else if (indicator == 2)
			{
				dblstk.findMin();
			}
			else
			{
				sstk.findMin();
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