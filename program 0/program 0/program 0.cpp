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

	int binaryArr[9];
	string hexadecimalArr[2];
	//int BCD[12];

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
			binaryArr[i] = input % 2;
			input = input / 2;
		}

		


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

		/*cout << "Hexadecimal: ";
		for (int j = 1; j >= 0; j--)
		{
			
				cout << tempInt[j];

		}*/
	}

	void BCDConvert(int input)
	{
		
	}

	void print(int temp)
	{
		//Decimal output
		if (temp < 10)
		{
			cout << temp << "          ";
		}
		else if (temp < 100)
		{
			cout << temp << "         ";
		}
		else if (temp >= 100)
		{
			cout << temp << "        ";
		}
		

		//Binary output

		if (temp == 0)
		{
			cout << "0000 0000";
		}

		if (temp == 1)
		{
			cout << "0000 000";
		}

		if (temp >= 2 && temp <= 3)
		{
			cout << "0000 00";
		}

		if (temp >= 4 && temp <= 7)
		{
			cout << "0000 0";
		}

		if (temp >= 8 && temp <= 15)
		{
			cout << "0000";
		}

		if (temp >= 16 && temp <= 31)
		{
			cout << "000";
		}

		if (temp >= 32 && temp <= 63)
		{
			cout << "00";
		}
		if (temp >= 64 && temp <= 127)
		{
			cout << "0";

		}

		for (int j = 8; j >= 0; j--)
		{
			if (binaryArr[j] == 0 || binaryArr[j] == 1)
			{
				if (j == 3)
				{
					cout << " ";
				}
				cout << binaryArr[j];
			}

		}




		cout << endl;
	}

};

int main()
{
	Convert a;
	int temp = 0;
	cout << "DECIMAL    BINARY         HEXADECIMAL       BCD" << endl;
	for (int i = 0; i < 256; i++)
	{
		a.binaryConvert(i);
		a.hexadecimalConvert(i);


		a.print(i);
	}

    return 0;
}

