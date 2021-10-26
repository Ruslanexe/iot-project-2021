#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* str;
    int n = 1;
    str = malloc(100);
    fgets(str, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (str[i] == ' ')
        {
            for (int n = i; n < 100; n++)
            {
                str[n] = str[n + 1];
                i--;
            }
        }
    }

    printf("%s", str);
    free(str);
    return 0;
}