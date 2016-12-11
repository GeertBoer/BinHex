#include <stdint.h>
#include <stdio.h>
#include "binhex.h"

int main(int argc, char const *argv[])
{
	uint8_t hoi = 0xF3;
	char hex[6];
	char bin[12];
	hexToChar(hex, hoi);
	byteToChar(bin, hoi);

	printf("Binair: %s\n", bin);
	printf("Hexadecimaal: %s\n", hex);
	return 0;
}