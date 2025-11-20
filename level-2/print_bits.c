#include <unistd.h>

void print_bits(unsigned char octet)
{
    unsigned char c;
    int index = 7;
    while (index >= 0)
    {
        c = ((octet >> index) & 1) + '0';
        write(1, &c, 1);
        index --;
    }
}

int main()
{
    print_bits(2);
}