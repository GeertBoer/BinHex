#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "binhex.h"

void convertBinToChar(char *charArray, uint8_t byte)
{
	switch (byte)
	{
		case 0:
			strcpy(charArray, "0000");
			break;
		case 1:
			strcpy(charArray, "0001");
			break;
		case 2:
			strcpy(charArray, "0010");
			break;
		case 3:
			strcpy(charArray, "0011");
			break;
		case 4:
			strcpy(charArray, "0100");
			break;
		case 5:
			strcpy(charArray, "0101");
			break;
		case 6:
			strcpy(charArray, "0110");
			break;
		case 7:
			strcpy(charArray, "0111");
			break;
		case 8:
			strcpy(charArray, "1000");
			break;
		case 9:
			strcpy(charArray, "1001");
			break;
		case 10:
			strcpy(charArray, "1010");
			break;
		case 11:
			strcpy(charArray, "1011");
			break;
		case 12:
			strcpy(charArray, "1100");
			break;
		case 13:
			strcpy(charArray, "1101");
			break;
		case 14:
			strcpy(charArray, "1110");
			break;
		case 15:
			strcpy(charArray, "1111");
			break;
		default:
			strcpy(charArray, "eror");
			break;
	}
}

void convertHexToChar(char *charArray, uint8_t byte)
{
	switch (byte)
	{
		case 0:
			strcpy(charArray, "0");
			break;
		case 1:
			strcpy(charArray, "1");
			break;
		case 2:
			strcpy(charArray, "2");
			break;
		case 3:
			strcpy(charArray, "3");
			break;
		case 4:
			strcpy(charArray, "4");
			break;
		case 5:
			strcpy(charArray, "5");
			break;
		case 6:
			strcpy(charArray, "6");
			break;
		case 7:
			strcpy(charArray, "7");
			break;
		case 8:
			strcpy(charArray, "8");
			break;
		case 9:
			strcpy(charArray, "9");
			break;
		case 10:
			strcpy(charArray, "A");
			break;
		case 11:
			strcpy(charArray, "B");
			break;
		case 12:
			strcpy(charArray, "C");
			break;
		case 13:
			strcpy(charArray, "D");
			break;
		case 14:
			strcpy(charArray, "E");
			break;
		case 15:
			strcpy(charArray, "F");
			break;
		default:
			strcpy(charArray, "eror");
			break;
	}
}

void byteToChar(char *charArray, uint8_t byte)
{
	uint8_t firstByte = byte & 0x0F;
	uint8_t secondByte = byte & 0xF0;
	secondByte >>= 4;

	char prefix[] = "0b";
	char leftByte[4];
	char rightByte[4];

	convertBinToChar(rightByte, firstByte);
	convertBinToChar(leftByte, secondByte);

	char out[12];
	strcpy(out, prefix);
	strcat(out, leftByte);
	strcat(out, " ");
	strcat(out, rightByte);

	strcpy(charArray, out);
}

void hexToChar(char *charArray, uint8_t byte)
{
	uint8_t firstByte = byte & 0x0F;
	uint8_t secondByte = byte & 0xF0;
	secondByte >>= 4;

	char prefix[] = "0x";
	char leftByte[4];
	char rightByte[4];

	convertHexToChar(rightByte, firstByte);
	convertHexToChar(leftByte, secondByte);

	char out[6];
	strcpy(out, prefix);
	strcat(out, leftByte);
	strcat(out, rightByte);

	strcpy(charArray, out);
}



//(C) COPYRIGHT 1938 GRATTIE 
//ALL RIGHTS RESERVED - PIN1 = 3 PIN2 = 2 - YEE
//PLEASE LIKE AND SUBSCRIBE 4 MORE