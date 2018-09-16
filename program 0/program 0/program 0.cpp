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

public:
	Convert()
	{
		decimal = 0;
		binary = "0000 0000";
		hexadecimal = "00";
		BCD = "0000 0000 0000";
	}

	int getDecimal()
	{
		return decimal;
	}

	void setDecimal(int input)
	{
		decimal = input;
	}

	void binaryConvert(int input)
	{

		int tempInt[9];
		
		for (int i = 0; input > 0; i++)
		{
			tempInt[i] = input % 2;
			input = input / 2;
		}

		
	}

	string hexadecimalConvert(int input)
	{
		return " ";
	}

	string BCDConvert(int input)
	{
		return " ";
	}

	void print()
	{
		cout << "decimal: " << decimal << endl;

		//===========
		cout << "binary: ";
		for (int j = 8; j >= 0; j--)
		{
			if (tempInt[j] == 0 || tempInt[j] == 1)
			{
				if (j == 3)
				{
					cout << " ";
				}
				cout << tempInt[j];
			}

		}
		cout << endl;
		//============

		cout << "hexadecimal: " << hexadecimal << endl;
		cout << "BCD: " << BCD << endl;
	}
};

int main()
{
	Convert a;
	int temp = 0;

	cout << "Input decimal number" << endl;
	cin >> temp;
	a.setDecimal(temp);
	a.binaryConvert(a.getDecimal());

	
	a.print();

    return 0;
}

