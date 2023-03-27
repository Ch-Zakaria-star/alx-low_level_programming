#include "main.h"

/**
* rev_string -change value
*
*@s: stores the input
*/

void rev_string(char *s)
{
int i, j = 0;
char *fst = s, *lst = s, temp;
while (s[j])
j++;

for (i = 0; i < j - 1; i++)
{
lst++;
}
for (i = 0; i < j--; i++)
{
temp = *lst;
*lst = *fst;
*fst = temp;
fst++;
lst--;
}
}
