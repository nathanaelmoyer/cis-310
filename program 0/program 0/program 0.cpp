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
	int binary;
	int hexadecimal;
	int BCD;

public:
	Convert()
	{
		decimal = 0;
		binary = 0;
		hexadecimal = 0;
		BCD = 0;
	}

	int getDecimal()
	{
		return decimal;
	}

	void setDecimal(int input)
	{
		decimal = input;
	}

	int getBinary()
	{
		return decimal;
	}

	void setBinary(int input)
	{
		binary = input;
	}
	
	int getHexadecimal()
	{
		return hexadecimal;
	}

	void setHexadecimal(int input)
	{
		hexadecimal = input;
	}

	int getBCD()
	{
		return hexadecimal;
	}

	void setBCD(int input)
	{
		hexadecimal = input;
	}

	void binaryConvert(int input)
	{

		int tempInt[9];
		
		for (int i = 0; input > 0; i++)
		{
			tempInt[i] = input % 2;
			input = input / 2;
		}

		cout << "Binary: ";
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

	}

	void hexadecimalConvert(int input)
	{
		int tempInt[2];

		for (int i = 0; i < 2; i++)
		{
			if (tempInt[i] <= 9 || tempInt[i] >= 0)
			{
				tempInt[i] = input;
			}
			else
			{
				tempInt[i] = input % 16;
				input = input / 16;
			}
			
		}

		cout << "Hexadecimal: ";
		for (int j = 1; j >= 0; j--)
		{
			//if (true)
			//{
				cout << tempInt[j];
			//}
			
				
				
			

		}
		cout << endl;
	}

	void BCDConvert(int input)
	{
		
	}

};

int main()
{
	Convert a;
	int temp = 0;

	cout << "Input decimal number" << endl;
	cin >> temp;
	cout << endl << endl;
	a.setDecimal(temp);
	a.binaryConvert(a.getDecimal());
	a.hexadecimalConvert(temp);
	


    return 0;
}

