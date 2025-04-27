#include <stdio.h>
#include <string.h>

int main()
{
    char S[101];
    scanf("%s", S);
    int len = strlen(S), count = 0;
    for (int i = 0; i < len; i++)
    {
        if (S[i] >= '0' && S[i] <= '9')
        {
            S[i] = '*';
            count++;
        }
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            S[i] = '^';
            count++;
        }
    }
    printf("Mutated Password: ");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", S[i]);
    }
    printf("\n");
    printf("Replacements: %d\n", count);
}