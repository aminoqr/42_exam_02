#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 0;
    int j = 0;
    while(argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (!argv[1][i])
        {
            j = 0;
            while(j < i)
            {
                write(1, &argv[1][j], 1);
                j++;
            }
        }
        write(1, "\n", 1);
}