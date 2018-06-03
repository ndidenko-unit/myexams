#include <stdio.h>

void	print_bits(unsigned char octet)
{
    int x = 128;
    int oct;

    oct = (int)octet;
    while (x != 0)
    {
        if (oct / x  == 1)
        {
            putchar('1');
            oct = oct - x;
            x = x / 2;
            continue;
        }
        if (oct / x == 0)
        {
            putchar('0');
            x = x / 2;
            continue;
        }
    }
}
unsigned char reverse_bits2(unsigned char b)
{
    printf("\nStart b is ");
    print_bits(b);
	b = (b & 0xF0) >> 4 | (b & 0x0F) << 4; // 1)
    printf("\nStep 1 ");
    print_bits(b);
	b = (b & 0xCC) >> 2 | (b & 0x33) << 2; // 2)
    printf("\nStep 2 ");
    print_bits(b);
	b = (b & 0xAA) >> 1 | (b & 0x55) << 1; // 3)
    printf("\nStep 3 ");
    print_bits(b);
	return (b);
}