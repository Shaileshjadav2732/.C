
#include <stdlib.h>
#include <string.h>

int main()
{

    char ptr, s1[25];

    char **s;
    s = (char*)malloc(sizeof(char *) * 5);
    for (int i = 0; i < 5; i++)
    {
        s[i] = (char *)malloc(sizeof(char) * 25);
    }
    printf("\n.......Enter the city name......\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", s[i]);
    }

    printf("\n._._._.These are city name enter by user._._._.\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < strlen(s[i]); j++)
        {
            printf("%c", *(*(s + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(s1, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], s1);
            }
        }
    }

    printf("\n!_!_!_These are name is alphabaticaly_!_!_!\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
    return 0;
}