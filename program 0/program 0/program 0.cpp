//Conver decimal
//Nathanael Moyer
//Date 9/16/18


#include "stdafx.h"
#include <iostream>//cin and cout operators
#include <string>//string class
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons

using namespace std;

class Convert
{
private:
	int decimal;
	string binary;
	string hexadecimal;
	string BCD;

private:
	Convert()
	{
		decimal = 0;
		binary = "0000 0000";
		hexadecimal = "00";
		BCD = "0000 0000 0000";
	}

	string binaryConvert(int input)
	{
		return " ";
	}

	string hexadecimalConvert(int input)
	{
		return " ";
	}

	string BCDConvert(int input)
	{
		return " ";
	}

	void print(int input)
	{
		cout << "decimal: " << decimal << endl;
		cout << "binary: " << binary << endl;
		cout << "hexadecimal: " << hexadecimal << endl;
		cout << "BCD: " << BCD << endl;
	}
};

int main()
{
	Convert test;



    return 0;
}

