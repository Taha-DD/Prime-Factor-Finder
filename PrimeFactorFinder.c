#include <stdio.h>
void rosie(int n)
{
    int i=2, u = n;
    while (i<=n)
    {
        if (u == i)
        {
            printf ("%d is alredy prime", n);
            return;
        }
        else if (n % i == 0)
        {
            printf("%d", i);
            n /= i;
            if (n > 1)
                printf("*");
        }
        else
            i++;
    }
    printf("=%d", u);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    rosie(n);
    return 0;
}
