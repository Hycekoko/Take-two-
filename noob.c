#include<stdio.h>

void print_alphabet_x10(void)

{
    char a = 'a';
    for (int i = 0; i < 10; i++)
    {for (int j = 0; j<26; j++)
        {
            putchar(a);
            a++;
        }
        putchar('\n');
        a = 'a';
    }
}
int main()
{
    print_alphabet_x10();
    return(0);
}


