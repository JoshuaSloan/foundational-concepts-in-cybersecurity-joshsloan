#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int guest()
{
	bool done = false;
	while (!done){
	string command;
	cout << "Please choose a command ('filecheck','exit'): ";
	cin >> command;
		if (command == "filecheck"){
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

int user(){
	bool done = false;
	while (!done){
	string command;
	cout << "Please choose a command ('read','exit'): ";
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
		else if (command == "exit"){
			done = true;
		}
		else{
			cout << "Invalid command ";
		}
	}
	return 0;
}


int admin(){
	bool done = false;
	while (!done){
	string command;
	cout << "Please choose a command ('read','write','exit'): ";
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
		else if (command == "exit"){
			done = true;
		}
		else{
			cout << "Invalid command ";
		}

	}
	return 0;
}

int main(){
	string input;
	while (true)
	{
		cout << "Type 'guest','user', or 'admin' to interact with a file: ";
		cin >> input;
		if (input == "guest")
		{
			guest();
		}
		else if (input == "admin")
		{
			string password;
			int tries = 0;
				while(tries < 3)
				{
					cout << "PASSWORD: ";
					cin >> password;
					if(password == "password1")
					{
						admin();
						break;
					}
					else{
						tries++;
						if(tries != 3){
						cout << "Incorrect password, attempts remaining: " << (3-tries) << endl; 
						} 
					}
				}
				if(tries == 3){
				cout << "Too many invalid password attempts, exiting login." << endl;
				}
		}
		else if (input == "user")
		{
			string username;
			string password;
			cout << "USERNAME: ";
			cin >> username;
			if (username == "Josh")
			{
				int tries = 0;
				while(tries < 3)
				{
					cout << "PASSWORD: ";
					cin >> password;
					if(password == "Sloan")
					{
						user();
						break;
					}
					else{
						tries++;
						if(tries != 3){
						cout << "Incorrect password, attempts remaining: " << (3-tries) << endl; 
						} 
					}
				}
				if(tries == 3){
				cout << "Too many invalid password attempts, exiting login." << endl;
				}
			}
			else if (username == "Ryan")
			{
				int tries = 0;
				while(tries < 3)
				{
					cout << "PASSWORD: ";
					cin >> password;
					if(password == "Cook")
					{
						user();
						break;
					}
					else{
						tries++;
						if(tries != 3){
						cout << "Incorrect password, attempts remaining: " << (3-tries) << endl; 
						}
					}
				}
				if(tries == 3){
				cout << "Too many invalid password attempts, exiting login." << endl;
				}
			}
			else
			{
				cout << "User with that username does not exist!" << endl;
			}
		}
		else
		{
			cout << "Invalid login info" << endl;
		}
	}
	return 0;
}