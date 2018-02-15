// SDES.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	// Code assistance from http://www.cplusplus.com/forum/beginner/21033/
	int choice;
	auto programRun = true;
	while (programRun)
	{
		cout << "*************CaesarCipher************\n";
		cout << " 1 - Encrypt\n";
		cout << " 2 - Decrypt\n";
		cout << " 3 - Exit\n";
		cout << " Enter your choice and press return: ";

		cin >> choice;

		string input;
		int plainText[8];

		switch (choice)
		{
		case 1: 
		cout << " Please enter your 8-bit plaintext.\n";

		cin.ignore();
		getline(cin, input);
		stringstream stream(input);

		for (int i{}; i < sizeof(input); i++)
		{
			stream >> plainText[i];
			if (!stream) break;
		}


		break;

		case 2: 
		cout << " Please enter your 8-bit ciphertext.\n";

		break;
		

		case 3: 
		cout << "End of Program.\n";
		programRun = false;
		break;

		default: 

		cout << "Not a Valid Choice. \n";
		cout << "Choose again.\n";
		cin >> choice;
		break;
		}
	}
    return 0;
}

