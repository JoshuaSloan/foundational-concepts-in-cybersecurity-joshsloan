#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(){
	bool done = false;
	while (!done){
	string command;
	cout << "Please choose a command ('read','write','filecheck', or 'exit'): ";
	cin >> command;
		if (command == "read"){
		ifstream infile;
		cout << "Please enter the file name> " << flush;
		string infilename;
		while (true)
		{
			cin >> infilename;
			infile.open(infilename.c_str());
			if (infile) break;
			cout << "Invalid file. Please enter a valid file name> " << flush;
		}
			char output[100];
			if (infile.is_open()) {
			while (!infile.eof()) {

			infile >> output;
			cout << output << " ";
			}
		}
		
		infile.close();
		cout << endl;
		}
		else if (command == "write"){
		ofstream outfile;
		cout << "Please enter the file name> " << flush;
		while (true)
		{
			string outfilename;
			cin >> outfilename;
			outfile.open(outfilename.c_str(),fstream::app);
			if (outfile) break;
			cout << "Invalid file. Please enter a valid file name> " << flush;
		}
			string newfiletext;
			string throwaway;
			cout << "Enter the word 'add', followed by the text you would like to append to the current file: ";
			cin >> throwaway;
			getline(cin,newfiletext);
			outfile << newfiletext;	
			outfile.close();
		}
		else if (command == "filecheck"){
		ifstream infile;
		cout << "Please enter the file name> " << flush;
		
		string infilename;
		cin >> infilename;
		infile.open(infilename.c_str());
			if (infile){
				cout << "File: " << infilename << " exists." << endl;
			}
			else{
				cout << "File: " << infilename << " does NOT exist." << endl;
			}
		}
		else if (command == "exit"){
			done = true;
		}
		else{
			cout << "Invalid command ";
		}
	}
	return 0;
}