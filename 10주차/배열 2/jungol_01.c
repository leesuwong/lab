#include <stdio.h>

int main()
{
    int count[26] = {0};
    char ch;
    while (scanf(" %c", &ch) == 1 && ch >= 'A' && ch <= 'Z')
        count[ch - 'A']++;
    for (int i = 0; i < 26; i++)
        if (count[i]) printf("%c : %d\n", 'A' + i, count[i]);
    return 0;
}
