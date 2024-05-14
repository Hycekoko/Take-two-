#include <stdio.h>

void print_alphabet_x10(void)
{
    char a = 'a';
    int i = 0;
    while (i<10)
    {
        while (a <= 'z')
        {
            printf("%c", a);
            a++;
        }
        printf("\n");
        a = 'a';
        i++;
    }
}

int main ()
{
    print_alphabet_x10();
    return (0);
}


