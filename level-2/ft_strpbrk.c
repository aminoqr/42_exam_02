char *ft_strpbrk(const char *s, const char *accept)
{
    if (!s || !accept)
        return 0;
    int i = 0;
    int j;
    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if (s[i] == accept[j])
                return (char *)&s[i];
            j++;
        }
        i++;
    }
    return 0;
}