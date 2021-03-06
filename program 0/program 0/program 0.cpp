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
	int BCDArr[12] = { 0 };

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
		return BCD;
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
		int tempInt;
		
		int i = 0;
		while (input > 0)
		{
			tempInt = input % 16;

			switch (tempInt)
			{
			case 0:
				hexadecimalArr[i] = "0";
				break;
			case 1:
				hexadecimalArr[i] = "1";
				break;
			case 2:
				hexadecimalArr[i] = "2";
				break;
			case 3:
				hexadecimalArr[i] = "3";
				break;
			case 4:
				hexadecimalArr[i] = "4";
				break;
			case 5:
				hexadecimalArr[i] = "5";
				break;
			case 6:
				hexadecimalArr[i] = "6";
				break;
			case 7:
				hexadecimalArr[i] = "7";
				break;
			case 8:
				hexadecimalArr[i] = "8";
				break;
			case 9:
				hexadecimalArr[i] = "9";
				break;
			case 10:
				hexadecimalArr[i] = "A";
				break;
			case 11:
				hexadecimalArr[i] = "B";
				break;
			case 12:
				hexadecimalArr[i] = "C";
				break;
			case 13:
				hexadecimalArr[i] = "D";
				break;
			case 14:
				hexadecimalArr[i] = "E";
				break;
			case 15:
				hexadecimalArr[i] = "F";
				break;
			default:
				break;
			}
			i++;
			input = input / 16;
		}
		cout << endl;
		
	}

	void BCDConvert(int input)
	{
		int digit[3] = { 0 };
		int digitOne[4] = { 0 };
		int digitTwo[4] = { 0 };
		int digitThree[4] = { 0 };
		
		digit[0] = input / 100;
		input = input % 100;
		digit[1] = input / 10;
		input = input % 10;
		digit[2] = input / 1;

		int i = 0;
		while (digit[0] > 0)
		{
			digitOne[i] = digit[0] % 2;
			digit[0] = digit[0] / 2;
			i++;
		} i = 0;
		while (digit[1] > 0)
		{
			digitTwo[i] = digit[0] % 2;
			digit[0] = digit[0] / 2;
			i++;
		} i = 0;
		while (digit[2] > 0)
		{
			digitThree[i] = digit[0] % 2;
			digit[0] = digit[0] / 2;
			i++;
		} i = 0;
		for (int i = 0; i <= 4; i++)
		{
			BCDArr[i] = digitThree[i];
		}
		for (int i = 0; i <= 4; i++)
		{
			BCDArr[i + 4] = digitThree[i];
		}
		for (int i = 0; i <= 4; i++)
		{
			BCDArr[i + 8] = digitThree[i];
		}
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


		//Hexadecimal output

		cout << "      ";
		cout << hexadecimalArr[1] << hexadecimalArr[0];
		if (temp == 0)
		{
			cout << "0 ";
		}
		else if (temp >= 1 && temp <= 15)
		{
			cout << " ";
		}
		

		cout << "                ";

		//BCD output

		for (int i = 11; i >= 8; i--)
		{
			cout << BCDArr[i];
		}
		cout << " ";
		for (int i = 7; i >= 4; i--)
		{
			cout << BCDArr[i];
		}
		cout << " ";
		for (int i = 3; i >= 0; i--)
		{
			cout << BCDArr[i];
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
		a.BCDConvert(i);


		a.print(i);
	}

    return 0;
}

