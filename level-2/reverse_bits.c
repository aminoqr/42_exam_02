unsigned char   reverse_bits(unsigned char octet)
{
    int i = -1;
    unsigned char   res = 0;

    while(++i < 8)
    {
        res <<= 1;
        res |= (octet & 1);
        octet >>=1;
    }
    return res;
}