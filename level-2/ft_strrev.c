#include <stdio.h>
char *ft_strrev(char *str)
{
    if (!str)
        return 0;
    int len = 0;
    while(str[len])
        len++;
    int i = 0;
    char temp;
    while(i <= len/2)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len-i - 1] = temp;
        i++;
    }
    return str;
}

int main()
{
    printf("%s", ft_strrev("Hello"));
}